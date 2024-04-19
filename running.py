import googlemaps
import math
import webbrowser
import os

# Chiave API di Google Maps
API_KEY = 'AIzaSyB75GP0-I6kSaH78mN9bFsvO1DDEbRhIvo'
gmaps = googlemaps.Client(key=API_KEY)

def calcola_velocita(intensita):
    velocita_raccomandata = {
        "bassa": 6,   # 6 km/h
        "media": 8,   # 8 km/h
        "alta": 10    # 10 km/h
    }
    return velocita_raccomandata.get(intensita, 6)

def ottieni_coordinate(indirizzo):
    geocode_result = gmaps.geocode(indirizzo)
    if geocode_result:
        coordinate = geocode_result[0]['geometry']['location']
        return coordinate['lat'], coordinate['lng']
    else:
        print("Impossibile trovare le coordinate per l'indirizzo specificato.")
        return None, None

# Input dell'utente
indirizzo_via = input("Inserisci l'indirizzo della via: ")
intensita = input("Scegli l'intensità della corsa (Bassa, Media, Alta): ").lower()
durata_massima = float(input("Inserisci la durata massima della corsa in minuti: "))

# Calcola la velocità media raccomandata
velocita_media = calcola_velocita(intensita)

# Ottieni le coordinate dell'indirizzo
latitudine, longitudine = ottieni_coordinate(indirizzo_via)
if latitudine is None or longitudine is None:
    print("Impossibile ottenere le coordinate per l'indirizzo fornito.")
    exit()

# Calcola i punti del percorso circolare
numero_punti = 36
punti_percorso = []
for angolo in range(0, 360, 360 // numero_punti):
    lat = latitudine + (velocita_media * durata_massima / 60) / 111 * math.cos(math.radians(angolo))
    lng = longitudine + (velocita_media * durata_massima / 60) / 111 * math.sin(math.radians(angolo))
    punti_percorso.append((lat, lng))

# Genera lo script JavaScript per la mappa
script_mappa = """
<script type="text/javascript">
    function initialize() {
        var map = new google.maps.Map(document.getElementById("map_canvas"), {
            zoom: 16,
            center: new google.maps.LatLng({}, {})
        });

        new google.maps.Polyline({
            clickable: false,
            geodesic: true,
            strokeColor: "#0000FF",
            strokeOpacity: 1.000000,
            strokeWeight: 5,
            map: map,
            path: [
""".format(latitudine, longitudine)

# Aggiungi i punti del percorso allo script JavaScript
for punto in punti_percorso:
    script_mappa += "                new google.maps.LatLng({}, {}),\n".format(punto[0], punto[1])

# Completa lo script JavaScript
script_mappa += """
            ]
        });
    }
</script>
"""

# Genera il codice HTML completo
html_completo = """
<html>
<head>
    <meta name="viewport" content="initial-scale=1.0, user-scalable=no" />
    <meta http-equiv="content-type" text/html; charset=UTF-8" />
    <title>Google Maps - Percorso Circolare</title>
    <script type="text/javascript" src="https://maps.googleapis.com/maps/api/js?key={key}"></script>
    {script}
</head>
<body style="margin:0px; padding:0px;" onload="initialize()">
    <div id="map_canvas" style="width: 100%; height: 100%;"></div>
</body>
</html>
""".format(key=API_KEY, script=script_mappa)

# Scrivi il codice HTML su un file
with open("mappa.html", "w") as file:
    file.write(html_completo)

# Apri il file HTML nel browser predefinito
webbrowser.open('file://' + os.path.realpath("mappa.html"))
print("File HTML generato e aperto nel browser con successo: mappa.html")
