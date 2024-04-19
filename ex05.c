#include <stdio.h>

int main() {
    float num1;
    float num2;
    char *risposta;

    printf("Inserisci il primo numero: ");
    scanf("%f", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%f", &num2);

    printf("Vuoi eseguire l'addizione? (si/no): ");
    scanf(" %s", risposta);
    if (risposta[0] == 's' && risposta[1] == 'i') 
    {
        printf("Addizione: %f\n", num1 + num2);
    }

    printf("Vuoi eseguire la sottrazione? (si/no): ");
    scanf(" %s", risposta);
    if (risposta[0] == 's' && risposta[1] == 'i') 
    {
        printf("Sottrazione: %f\n", num1 - num2);
    }

    printf("Vuoi eseguire il prodotto? (si/no): ");
    scanf(" %s", risposta);
    if (risposta[0] == 's' && risposta[1] == 'i') 
    {
        printf("Prodotto: %f\n", num1 * num2);
    }

    printf("Vuoi eseguire la divisione? (si/no): ");
    scanf(" %s", risposta);
    if (risposta[0] == 's' && risposta[1] == 'i') 
    {
        printf("Divisione: %f\n", num1 / num2);
    }

}

