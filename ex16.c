#include <stdio.h>
#include <stdlib.h>

int main()

{
    int serie;
    int i;
    i = 0;
    // char str[5] = {'c', 'i', 'a', 'o', '\0'};
    // char str[5] = {1, 3, 2, 5, 6};
    printf("quanti numeri vuoi inserire?\n");
    scanf("%d", &serie);
    int *array = malloc(serie * sizeof(int));

    while (i < serie)
    {
        scanf(" %d", &array[i]);
        i++;
    }
    i = 0;
    while (i < serie)
    {
        printf("%d\n", array[i]);
        i++;
    }

    
    // serie.Split( new[] { ',' } ).list<int>();
}