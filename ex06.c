#include <stdio.h>

int main()

{
    char *risposta;
    float lato, raggio, lato2;
    float area;

    printf("ciao sono un calcolatore geometrico...\n");
    printf("vuoi calcolare le caratteristiche di un quarato? (si/no) ");
    scanf(" %s", risposta);
    if (risposta[0] == 's' && risposta[1] == 'i') {
        printf("inserisci la lunghezza del lato (in cm)  ");
        scanf(" %f", &lato);
        printf(" l'area è ampia %.0fcm\t", lato* lato);
        printf(" il perimetro è lungo %.0fcm\n", lato*4);
    }
    else {
        printf("vuoi calcolare le caratteristiche di un cerchio? (si/no) ");
        scanf(" %s", risposta);
        if (risposta[0] == 's' && risposta[1] == 'i') {
            printf("inserisci la lunghezza del raggio (in cm)  ");
            scanf(" %f", &raggio);
            printf(" l'area è ampia %.2fcm\t", raggio*raggio*3.14);
            printf(" il perimetro è lungo %.2fcm\n", 2*raggio*3.14);
        }
        else {
           printf("vuoi calcolare le caratteristiche di un rettangolo? (si/no) ");
            scanf(" %s", risposta);
            if (risposta[0] == 's' && risposta[1] == 'i') {
                printf("inserisci la lunghezza dei lati (in cm)\n");
                scanf(" %f", &lato);
                scanf(" %f", &lato2);
                printf(" l'area è ampia %.0fcm\t", lato*lato2);
                printf(" il perimetro è lungo %.0fcm\n", 2*lato*lato2);
            }
        }
    }
}