#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h> // Libreria per le richieste HTTPchmod +x a.out



// Funzione per gestire la risposta HTTP
size_t write_callback(void *ptr, size_t size, size_t nmemb, char *data) {
    strcat(data, (char *)ptr);
    return size * nmemb;
}

// Funzione per ottenere i giochi per data da sportsdataIO API
void getGamesByDate(char* competition, char* date) {
    CURL *curl;
    CURLcode res;
    char url[200];
    char apiKey[] = "1315badebb184d91b29a3db0fff3c61d";
    char responseData[10000] = "";

    curl = curl_easy_init();
    if(curl) {
        sprintf(url, "https://api.sportsdata.io/v4/soccer/scores/json/GamesByDate/%s/%s?key=%s", competition, date, apiKey);
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, responseData);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if(res == CURLE_OK) {
            printf("Risposta API:\n%s\n", responseData);
        } else {
            fprintf(stderr, "Errore nella richiesta HTTP: %s\n", curl_easy_strerror(res));
        }
    }
}

int main() {
    char competition[] = "EPL"; // Premier League (esempio)
    char date[] = "2024-04-19"; // Data (esempio)

    getGamesByDate(competition, date);

    return 0;
}
