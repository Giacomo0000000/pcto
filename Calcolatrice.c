#include <stdio.h>

void domanda(char *risp) {
    printf("Vuoi fare %s?", risp);
}
void addizione(int numero1, int numero2) {
    float somma = numero1+ numero2;
    printf("la somma dei due numeri è %.2f\n", somma);
}

void sottrazione(int numero1, int numero2) {
    float diff = numero1 - numero2;
    printf("la differenza tra i due numeri è %.2f\n", diff);
}

void moltiplicazione(int numero1, int numero2) {
    float prod = numero1*numero2;
    printf("il prodotto dei due numeri è %.2f\n", prod);

}

void divisione(int numero1, int numero2) {
    float divisione = numero1/numero2;
    printf("il quoziente tra due numeri è %.2f", divisione);
}

int main()

{
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
        addizione(num1,num2);
    }

    printf("Vuoi eseguire la sottrazione? (si/no): ");
    scanf(" %s", risposta);
    if (risposta[0] == 's' && risposta[1] == 'i') 
    {
        if (num1>num2) {
            sottrazione(num1, num2);
        }
        else {
            sottrazione(num2, num1);
        }
    }

    printf("Vuoi eseguire il prodotto? (si/no): ");
    scanf(" %s", risposta);
    if (risposta[0] == 's' && risposta[1] == 'i') 
    {
        moltiplicazione(num1, num2);
    }

    printf("Vuoi eseguire la divisione? (si/no): ");
    scanf(" %s", risposta);
    if (risposta[0] == 's' && risposta[1] == 'i') 
    {
        if (num1 == 0 || num2 == 0) {
            printf("Operazione Impossibile...\n cambiare il valore nullo\n");
        }
        divisione(num1, num2);
    }

}