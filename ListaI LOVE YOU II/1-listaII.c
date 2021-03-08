#include <stdio.h>
#include <stdlib.h>

void dobraNumero(int n1, int n2, int n3);

void main()
{
    int n1, n2, n3;

    printf("\nDigite os 3 numeros:");
    scanf("%d %d %d", &n1, &n2, &n3);

    dobraNumero(n1, n2, n3);
}

void dobraNumero(int n1, int n2, int n3)
{
    printf("\nDobro do numero 1: %d", n1 * 2);
    printf("\nDobro do numero 2: %d", n2 * 2);
    printf("\nDobro do numero 3: %d", n3 * 2);
}
