#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

int **CriaMatriz(int linhas, int colunas)
{
    int **Matriz;
    
    //alocando os vetores de:
    // 1: ponteiros para as linhas
    // 2: matriz completa
    Matriz = malloc(linhas*sizeof(int));
    Matriz[0] = malloc(linhas*colunas*sizeof(int));
    //alerta de erro caso a alocacao de pau
    if (Matriz == NULL || *Matriz == NULL)
    {
        printf("DEU PAU na alocacao\n");
        exit(1);
    }
    
    //ajustando os ponteiros de linhas para as
    //posicoes corretas na matriz completa
    int i, j;
    for (i=1; i < linhas; i++)
    {
        Matriz[i] = Matriz[0] + i*colunas;
    }

    //
    for (i=0; i < linhas; i++)
    {
        for (j=0; j < colunas; j++)
        {
            Matriz[i][j] = 0;
        }
    }

    return Matriz;

// int **mat ;
// int i, j ;

// // aloca um vetor de linhas ponteiros para linhas
// mat = malloc (linhas * sizeof (int*)) ;

// // aloca um vetor com todos os elementos da matriz
// mat[0] = malloc (linhas * colunas * sizeof (int)) ;

// // ajusta os demais ponteiros de linhas (i > 0)
// for (i=1; i < linhas; i++)
//    mat[i] = mat[0] + i * colunas ;

// // percorre a matriz
// for (i=0; i < linhas; i++)
//    for (j=0; j < colunas; j++)
//       mat[i][j] = 0 ;

//     return mat;
}

void LiberaMatriz(int **matriz, int linhas)
{
    linhas++;
    linhas--;
    free(matriz[0]);
    free(matriz);
}

void LeMatriz(int **matriz, int linhas, int colunas)
{
    int i,j;
    for (i=0; i < linhas; i++)
    {
        for (j=0; j < colunas; j++)
        {
            scanf("%d ", &matriz[i][j]);
        }
    }
}

void ImprimeMatrizTransposta(int **matriz, int linhas, int colunas)
{
    // int i,j;
    // for (i=0; i < linhas; i++)
    // {
    //     for (j=0; i < colunas; j++)
    //     {
    //         printf("%d ", matriz[i][j]);
    //     }
    //     printf("\n");
    // }

}