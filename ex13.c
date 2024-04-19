#include <stdio.h>

int main()

{
    int num;
    int i;
    int i1;
    int num1;
    float fattoriale;
    
    printf("inserisci un numero da cui calcolare il suo fattoriale\n");
    scanf("%d", &num);
 
    while (num == 0) {
        printf("inserisci un'altro numero\n");
        scanf("%d", &num);
    }
    i = num-1;
    i1 = num+1;
    fattoriale = num;
    if (num>0) {
        while (i > 0) {
            fattoriale = fattoriale * i;
            i--;
        }
    printf("Il fattoriale di %d è %.0f\n", num, fattoriale);
            //return fattoriale;
    }
    else if (num<0) {
        while (i1 < 0) {
            fattoriale = fattoriale * i1;
            i1++;
        }     
            //return fattoriale;
    printf("Il fattoriale di %d è %.0f\n", num, fattoriale);
    }   
}