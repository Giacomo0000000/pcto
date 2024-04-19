#include <stdio.h>

int main()

{
    int num1, num2;
    char *risposta;

    printf("Inserisci due numeri\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf(" vuoi vedere se uno è multiplo dell'altro? ");
    scanf("%s", risposta);
    if (risposta[0] == 's' && risposta[1] == 'i') {
        if (num1%num2 == 0) {
            printf("%d è un multiplo di %d\n", num1, num2);
        }
        else {
            printf("%d non è un multiplo di %d\n", num1, num2);
        }
    }
}