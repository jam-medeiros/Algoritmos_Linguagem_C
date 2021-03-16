#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    float catalogo[15], *p_cat;
    //coletando valor dos produtos
    printf("Informe os valor dos produtos: \n");
    for (i = 0; i <= 14; i++)
    {
        printf("Informe o valor do item %d do catalogo: ", i + 1);
        scanf("%f", &catalogo[i]);
    }

    //atualizando catalogo de precos atraves do ponteiro
    for (i = 0; i <= 14; i++)
    {
        p_cat = &catalogo[i];
        *p_cat = *p_cat + (*p_cat * 0.0478);
        //imprimindo catalogo(atualizados)
        printf("Preco reajustado do item %d : %.2f \n", i + 1, *p_cat);
    }
}
