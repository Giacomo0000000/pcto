#include <stdio.h>

int main()

{
    int anno;
    
    printf("Insersici un anno ");
    scanf("%d", &anno);
    printf("controllo in corso...\n");
    if (anno%400 == 0 && (anno%100 != 0 || anno%4 == 0)) {
        printf("l'anno è bisestile\n");
    }
    else {
        printf("L'anno non è bisestile\n");
    }
}