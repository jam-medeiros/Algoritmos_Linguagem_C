#include <stdio.h>
#include <stdlib.h>

int mdc(int m, int n)
{
    if (n == 0)
        return m;
    return mdc(n, m % n);
}

void main()
{
    int m, n, resultado;
    printf("Para calcular o MDC informe:\n");
    printf("M:\n");
    scanf("%d", &m);
    printf("N:\n");
    scanf("%d", &n);
    resultado = mdc(m, n);
    printf("MDC: %d \n", resultado);
}
