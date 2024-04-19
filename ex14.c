#include <stdio.h>

int main()

{
    int anno;
    int diff;

    printf("inserisci il tuo anno di nascita\t");
    scanf(" %d", &anno);
    if (anno == 1969) {
        printf("Sei nato nello stesso anno del primo viaggio sulla Luna!\n");
    } 
    else if (anno< 1969) {
        diff = 1969-anno;
        printf("Sei nato %d anni dopo il primo viaggio sulla Luna!\n", diff);
    }
    else {
        diff = anno -1969;
        printf("Sei nato %d anni prima il primo viaggo sulla Luna\n", diff);
    }
}