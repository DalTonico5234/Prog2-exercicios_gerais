#include "vetor.h"
#include <stdio.h>

void LeVetor(Vetor *vetor)
{
    int i;
    scanf("%d\n", &vetor->tamanhoUtilizado);
    for (i = 0; i < vetor->tamanhoUtilizado; i++)
    {
        scanf("%d ", &vetor->elementos[i]);
    }
}

int AplicarOperacaoVetor(Vetor *vetor, Operation op)
{
    int i, result;
    for (i = 0; i < vetor->tamanhoUtilizado - 1; i++)
    {
        if (i==0)
        {
            result = vetor->elementos[i];
        }
        result = op(result, vetor->elementos[i+1]);
    }
    return result;
}