#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    float temperatura[24];
    float *p_temp;

    //lendo as temperaturas
    printf("Insira 10 temperaturas em Kelvin: \n");
    for (i = 0; i <= 23; i++)
    {
        printf("Temperatura %d : ", i + 1);
        scanf("%f", &temperatura[i]);
    }
    //atualiza os valores dentro do vetor utilizando ponteiros
    for (i = 0; i <= 23; i++)
    {
        p_temp = &temperatura[i];
        *p_temp = 1.8 * temperatura[i] - 459.67; // convertendo temperatura para Fahrenheit
    }

    printf("Temperaturas convertidas para Fahrenheit: \n");
    //imprimindo os valores (atualizados) do vetor utilizando ponteiros
    for (i = 0; i <= 23; i++)
    {
        p_temp = &temperatura[i];
        printf("Temperatura %d : %.2f \n", i + 1, *p_temp);
    }
}
