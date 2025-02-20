#include <stdio.h>
#include "utils.h"

#define DEUPAU 0

int main()
{
    int linhas, colunas;
    int **Matriz;
    scanf("%d %d\n", &linhas, &colunas);
    if (DEUPAU)
    {
        printf("Linhas: %d\nColunas: %d", linhas, colunas);
    }

    Matriz = CriaMatriz(linhas, colunas);
    if (DEUPAU)
    {
        printf("Criou\n");
    }

    LeMatriz(Matriz, linhas, colunas);
    if (DEUPAU)
    {
        
        printf("Matriz lida:\n");
        for (int i=0; i < linhas; i++)
        {
            for (int j=0; j < colunas; j++)
            {
                printf("%d ", Matriz[i][j]);
            }
            printf("\n");
        }
    }

    ImprimeMatrizTransposta(Matriz, linhas, colunas);
    if (DEUPAU)
    {
        printf("Quase lá\n");
    }
 
    LiberaMatriz(Matriz, linhas);
    if (DEUPAU)
    {
        printf("LIberada\n");
    }

    return 0;
}