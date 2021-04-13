#include <stdio.h>
#include <stdlib.h>

int bin(int k)
{

    if (k < 2)
        return k;

    return (10 * bin(k / 2)) + k % 2;
}

void main()
{
    int numero, resultado;
    printf("Digite um numero:");
    scanf("%d", &numero);

    resultado = bin(numero);

    printf("Numero binario: %d", resultado);
}
