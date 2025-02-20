#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

int *CriaVetor(int tamanho)
{
    int *V = (int*)calloc(tamanho,sizeof(int));
    if (V == NULL)
    {
        printf("Deu pau na alocacao\n");
        exit(1);
    }
    return V;
}

/**
 * Lê um vetor de inteiros de tamanho especificado.
 * 
 * @param vetor Ponteiro para o vetor a ser lido.
 * @param tamanho Tamanho do vetor a ser lido.
*/
void LeVetor(int *vetor, int tamanho)
{
    int i;
    for (i=0; i < tamanho; i++)
    {
        scanf("%d ", vetor+i);
    }
}

/**
 * Calcula a média dos valores de um vetor de inteiros de tamanho especificado.
 * 
 * @param vetor Ponteiro para o vetor a ser lido.
 * @param tamanho Tamanho do vetor a ser lido.
 * @return Média dos valores do vetor.
*/
float CalculaMedia(int *vetor, int tamanho)
{
    float media = 0;
    int i;
    for (i=0; i < tamanho; i++)
    {
        media += vetor[i];
    }
    media /= tamanho;
    return media;
}

/**
 * Libera a memória alocada para um vetor de inteiros.
 * 
 * @param vetor Ponteiro para o vetor a ser liberado.
*/
void LiberaVetor(int *vetor)
{
    free(vetor);
}