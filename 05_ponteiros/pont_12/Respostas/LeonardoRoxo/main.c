#include "vetor.h"

int Adicao(int num1, int num2)
{
    return num1 + num2;
}

int Multiplicacao(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    Vetor v;
    LeVetor(&v);    
    printf("Soma: %d\n", AplicarOperacaoVetor(&v, Adicao));
    printf("Produto: %d\n", AplicarOperacaoVetor(&v, Multiplicacao));
}