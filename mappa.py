import gmplot
import webbrowser
import os
from math import cos, sin, radians  # Make sure you have this line

# Sostituisci con la tua effettiva chiave API di Google Maps
gmaps_api_key = 'AIzaSyB75GP0-I6kSaH78mN9bFsvO1DDEbRhIvo'

def traccia_percorso_reale(latitudine_casa, longitudine_casa, raggio_km):
    gmap = gmplot.GoogleMapPlotter(latitudine_casa, longitudine_casa, 16, apikey=gmaps_api_key)

    # Calcola il percorso circolare
    latitudes, longitudes = zip(*[
        (
            latitudine_casa + (raggio_km / 6371) * cos(radians(angolo)),
            longitudine_casa + (raggio_km / 6371) / cos(radians(latitudine_casa)) * sin(radians(angolo))
        )
        for angolo in range(0, 360, 10)
    ])

    # Traccia il percorso sulla mappa
    gmap.plot(latitudes, longitudes, 'blue', edge_width=5)

    # Crea e salva la mappa in un file HTML
    file_path = 'percorso_reale.html'
    gmap.draw(file_path)

    # Apri il file nel browser
    webbrowser.open('file://' + os.path.realpath(file_path))

# Supponiamo che queste siano le coordinate e il raggio in km
latitudine_casa, longitudine_casa = 45.0, 9.0  # Ad esempio coordinate di Milano
raggio_km = 1.0  # Raggio del percorso circolare

# Traccia il percorso reale
traccia_percorso_reale(latitudine_casa, longitudine_casa, raggio_km)
