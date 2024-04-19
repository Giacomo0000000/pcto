#include <stdio.h>

int main()

{
    float temp, temp1, temp2;
    
    printf("inserisci una temperatura in C ");
    scanf(" %f", &temp);
    temp1 = temp * 9/5 + 32;
    temp2 = temp + 273.15;
    if (temp >= -273.15) {
    printf("Conversione in corso...\n");
    printf("la temperatura %f in C equvale  %f gradi Fahrenheit\n", temp, temp1);
    printf("la temperatura %f in C equivale a %f gradiu Kelvin\n", temp, temp2);
    }
    else {
        printf("ERRORE:\nRicorda che:\n Fahrenheit = (9/5) x Celsius + 32\n Kelvin = Celsius + 273.15\n");
    }
}