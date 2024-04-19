#include <stdio.h>

int main()

{
    int num;
    int somma;
    float media;
    float i;
    
    printf("inserisci una serie di numeri != da 0 di cui fare la media\n");
    printf("inserisci un numero \n");
    scanf("%d", &num);
    
    i = 0;
    
    while (num < 0) {
        printf("ALERT: Non inserire numeri negativi\n");
        printf("Inserisci un altro numero\n");
        scanf("%d", &num);
    somma = num;
    }
    while (num != 0) {
        printf("Inserisci un numero\n");
        scanf("%d", &num);
        while (num < 0) {
            printf("ALERT: Non inserire numeri negativi\n");
            printf("Inerisci un altro numero\n");
            scanf("%d", &num);
        } 
        somma = somma + num;
        i++;
        printf("somma : %d\n", somma);
        printf("i : %f\n", i);
    }
    media = somma/i;
    printf("la media dei numeri inseriti è %.2f\n", media);
}