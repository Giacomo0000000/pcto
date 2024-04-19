#include <stdio.h>

int main()

{
    int eta, eta1;
    printf("A che età si puo prendere la patente nel tuo paese? ");
    scanf(" %d", &eta);
    printf("Quanti anni hai? ");
    scanf(" %d", &eta1);
    if (eta1 >= eta) {
        printf("Puoi prendere la patente\n");
    }
    else {
        printf("Sei troppo piccolo per prendere la patente\n");
    }
}