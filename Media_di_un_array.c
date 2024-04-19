#include <stdio.h>
#include <stdlib.h>


int main()

{
    float media;
    float somma;
    int num;
    int i;
    int serie;
    //int numeri[5] = {5, 18, 21, 16, 17};
    
    i = 0;
    somma = 0; 
    printf("quanti numeri vuoi inserire?\n");
    scanf("%d", &serie);
    int *numeri = malloc(serie * sizeof(int));

    while (i < serie)
    {
        scanf(" %d", &numeri[i]);
        if (numeri[i] < 0) {
            printf("Errore!\n");
            break;
        }
        somma = somma + numeri[i];
        i++;
        media = somma /i;
        printf("La media dei numeri è %.1f\n", media);
    }
    //i = 0;
    //while (i < serie)
    //{
    //    printf("%d", numeri[i]);
    //    i++;
    //}
}