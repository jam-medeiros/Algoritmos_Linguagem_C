#include <stdio.h>
#include <stdlib.h>

int reajusteSaldo(float valor, float reajuste)
{
    return valor + (valor * (reajuste / 100));
}

void main()
{
    float valor, reajuste, novoSaldo = 0;

    printf("\nDigite o valor:");
    scanf("%f", &valor);
    printf("\nDigite o percentual de reajuste:");
    scanf("%f", &reajuste);

    novoSaldo = reajusteSaldo(valor, reajuste);
    printf("\nNovo saldo com reajuste: %f", novoSaldo);
}
