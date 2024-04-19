#include <stdio.h>

int main()

{
    float num1, num2, num3;
    printf("inserisci tre numeri\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    if (num1-num2 == num2-num3) {
        printf("I numeri sono in progressione aritmetica");
    }
    else {
        printf("I numeri NON sono in progressione aritmetica");
    }
}