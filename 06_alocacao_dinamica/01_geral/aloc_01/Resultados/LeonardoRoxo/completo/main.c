#include "utils.h"
#include <stdio.h>

int main()
{
    int tamanho;
    scanf("%d\n", &tamanho);
    int *V = CriaVetor(tamanho);
    LeVetor(V, tamanho);
    printf("%.2f\n", CalculaMedia(V, tamanho));
    LiberaVetor(V);
}