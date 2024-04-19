#include <stdio.h>

int main()

{
    float num1, num2, divisione;
    printf("inserisci due numeri \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    printf("Inserisci la divisione dei due numeri...");
    scanf("%f", &divisione);
    while (divisione != num1/num2) {
        printf("Operazione errata, Riprova\n");
        printf("Inserisci la divisione dei due numeri...");
        scanf("%f", &divisione);

    } 
    printf("Bravo!\n");

}