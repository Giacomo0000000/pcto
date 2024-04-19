#include <stdio.h>

int main()

{
    int num;
    int num1;
    
    printf("inserisci una serie di numeri e ti dirò qual è il minore \n");
    printf("inserisci un numero \n");
    scanf("%d", &num);

    while (num < 0) {
    printf("ALERT: Non inserire numeri negativi\n");        
    printf("Inserisci un altro numero\n");
    scanf("%d", &num);
    }
    num1 = num;
    //printf("num : %d\n", num);
    //printf("num1 : %d\n", num1);

    while (num != 0) {
        printf("Inserisci un altro numero\n");
        //printf("num : %d \n", num);
        while (num < 0) {
            printf("ALERT: Non inserire numeri negativi\n");
            printf("Inerisci un altro numero\n");
            scanf("%d", &num);
        } 
        if (num <= num1) {
            num1 = num;
            //printf(" num_min : %d\n", num1);
            //return num1;
        }
        else {
            //printf(" num_min : %d\n", num1);
            //return num1;
        }
        scanf("%d", &num);
        
    }    
    printf("Il numero minore è %d\n", num1);
}
    