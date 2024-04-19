#include <stdio.h>

int main()

{
    char nome[100];
    printf("Inserisci il tuo nome\n");  
    scanf("%[^\n]s", nome);
    printf("Ciao %s!\n", nome);
}