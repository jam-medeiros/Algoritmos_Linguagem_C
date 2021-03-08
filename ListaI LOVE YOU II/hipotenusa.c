#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa(float diagonalMaior, float diagonalMenor)
{
    return sqrt(diagonalMaior * diagonalMaior + diagonalMenor *
                                                    diagonalMenor);
}

void main()
{
    float catetoOposto, catetoAdjacente, hipo;

    printf("\nDigite os catetos: ");
    scanf("%f %f", &catetoOposto, &catetoAdjacente);

    hipo = hipotenusa(catetoOposto, catetoAdjacente);

    printf("\nHipotenusa: %f", hipo);
}
