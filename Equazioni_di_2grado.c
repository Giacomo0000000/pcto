#include <stdio.h>
#include  <math.h>

int main()

{
    float a;
    float b;
    float c;
    float x1; 
    float x2;
    float delta;

    printf("inserisci i valori di a, b e c \n");
    scanf("%f %f %f", &a, &b, &c);

    delta = b*b-4*a*c;
    if (delta>0) {
        x1 = -b+sqrt(delta)/(2*a);
        x2 = -b-sqrt(delta)/(2*a);
        printf("Il valore di x1 è %f e il valore di x2 è %f", x1, x2);
    }
    else if (delta==0) {
        x1 = -b/(2*a);
        printf("il valore di x è solo %f", x1);
    }
    else {
        printf("L'equazione non ha soluzioni ammissibili");
    }
}