#include <stdio.h>
#include <stdlib.h>

void main()
{
    int barbeiro = 0, servico;
    int servicos[5][3], i, j, soma;
    //zerando a tabela de servicos
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            servicos[i][j] = 0;
    }
    //fazendo a leitura dos servicos
    do
    {
        printf("Informe o nome do barbeiro <1-5>:\n");
        scanf("%d", &barbeiro);
        printf("Informe o servico <1-barba 2-cabelo 3-combo>:\n");
        scanf("%d", &servico);
        if (barbeiro >= 1 && barbeiro <= 5)
        {
            if (servico >= 1 && servico <= 3)
                servicos[barbeiro - 1][servico - 1]++;
            else
                printf("Servico invalido!\n");
        }
        else
            printf("barbeiro invalida!\n");
    } while (barbeiro != 0);
    //calculando e imprimindo o faturamento
    printf("\nFaturamento dos barbeiros:\n");
    for (i = 0; i < 5; i++)
    {
        soma = servicos[i][0] * 20;
        soma += servicos[i][1] * 30;
        soma += servicos[i][2] * 45;
        printf("\nbarbeiro %d: %d\n", i + 1, soma);
    }
}
