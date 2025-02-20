#include "pessoa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

tPessoa CriaPessoa()
{
    tPessoa juninho;
    juninho.nome[0] = '\0';
    juninho.pai = NULL;
    juninho.mae = NULL;
    return juninho;
}

void LePessoa(tPessoa *pessoa)
{
    scanf("%[^\n]\n", pessoa->nome);
}

int VerificaSeTemPaisPessoa(tPessoa *pessoa)
{
    if (pessoa->mae != NULL || pessoa->pai != NULL)
    {
        return 1;
    }
    return 0;
}

void ImprimePessoa(tPessoa *pessoa)
{
    if (VerificaSeTemPaisPessoa(pessoa))
    {
        printf("NOME COMPLETO: %s\n", pessoa->nome);
        if (pessoa->pai == NULL)
        {
            printf("PAI: NAO INFORMADO\n");
        }
        else
        {
            printf("PAI: %s\n", pessoa->pai->nome);
        }
        if (pessoa->mae == NULL)
        {
            printf("MAE: NAO INFORMADO\n\n");
        }
        else
        {
            printf("MAE: %s\n\n", pessoa->mae->nome);
        }
    }
}

void AssociaFamiliasGruposPessoas(tPessoa *pessoas)
{   
    // int iM, iP, iF;
    // scanf("mae: %d, pai: %d, filho: %d\n", &iM, &iP, &iF);
    // if (iM != -1)
    // {
    //     *pessoas[iF].mae = pessoas[iM];
    // }
    // if (iP != -1)
    // {
    //     *pessoas[iF].pai = pessoas[iP];
    // }

    tPessoa pessoa;
    int troca = 0;
    int qnt_associacoes = 0;
    int i = 0;
    scanf("\n");
    
    while (1)
    {
        LePessoa(&pessoas[i]);

        if (scanf("%*c%d\n", &qnt_associacoes) == 1)
            break;
        else
            i++;
    }

    int mae[qnt_associacoes], pai[qnt_associacoes], filho[qnt_associacoes];

    for (int i = 0; i < qnt_associacoes; i++)
    {
        scanf("mae: %d, pai: %d, filho: %d\n", &mae[i], &pai[i], &filho[i]);
    }

    for (int i = 0; i < qnt_associacoes - 1; i++)
    {
        for (int j = 0; j < qnt_associacoes - i - 1; j++)
        {
            if (filho[j] > filho[j + 1])
            {
                troca = filho[j];
                filho[j] = filho[j + 1];
                filho[j + 1] = troca;

                troca = mae[j];
                mae[j] = mae[j + 1];
                mae[j + 1] = troca;

                troca = pai[j];
                pai[j] = pai[j + 1];
                pai[j + 1] = troca;
            }
        }
    }

    for (int i = 0; i < qnt_associacoes; i++)
    {
        strcpy(pessoa.nome, pessoas[filho[i]].nome);

        // Verifique se o valor de pai e mae não é -1 antes de atribuir
        if (pai[i] != -1)
            pessoa.pai = &pessoas[pai[i]];
        else
            pessoa.pai = NULL;

        if (mae[i] != -1)
            pessoa.mae = &pessoas[mae[i]];
        else
            pessoa.mae = NULL;

        ImprimePessoa(&pessoa);
    }
}