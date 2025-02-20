#include <stdio.h>
#include "calculadora.h"

float Adicao(float num1, float num2)
{
    return num1 + num2;
}

float Subtracao(float num1, float num2)
{
    return num1 - num2;
}

float Multiplicacao(float num1, float num2)
{
    return num1 * num2;
}

float Divisao(float num1, float num2)
{
    return num1 / num2;
}

void menu(char *op, float num1, float num2)
{
    float result;

    scanf("%c\n", op);
    scanf("%f %f\n", &num1, &num2);

    if (*op == 'a')
    {
        result = Calcular(num1, num2, Adicao);
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);

    }
    if (*op == 's')
    {
        result = Calcular(num1, num2, Subtracao);
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);

    }
    if (*op == 'm')
    {
        result = Calcular(num1, num2, Multiplicacao);
        printf("%.2f x %.2f = %.2f\n", num1, num2, result);

    }
    if (*op == 'd')
    {
        result = Calcular(num1, num2, Divisao);
        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
    }
}

int main()
{
    char op = 0;
    float num1=0, num2=0;
    while (op != 'f')
    {
        menu(&op, num1, num2);
    }
}