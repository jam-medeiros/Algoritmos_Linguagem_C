#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m[5][5], i, j;

    printf("\nDigite os 25 valores da matriz:\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &m[i][j]);

    printf("\nElementos da matriz:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
            printf("%d \t", m[i][j]);
    }
}
