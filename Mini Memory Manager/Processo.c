// Manipular dados dos processos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Processo.h"

// Lista de processos
Processo *processos = NULL;
int total_processos = 0;

// Função para adicionar um processo à lista
void adicionar_processo(
    int id,
    int tamanho,
    int endereco)
{

    // Realocar memória para a nova lista de processos
    Processo *temp = realloc(processos, (total_processos + 1) * sizeof(Processo));
    if (temp == NULL)
    {
        printf("Erro ao realocar memória.\n");
        return;
    }
    processos = temp;

    processos[total_processos].id = id;
    processos[total_processos].tamanho = tamanho;
    processos[total_processos].endereco = endereco;
    processos[total_processos].ativo = 1;
    total_processos++;
};

// Listar Processos
void listar_processos()
{
    printf("=================\n");
    printf("Processos Ativos:\n");
    printf("=================\n");

    for (int i = 0; i < total_processos; i++)
    {

        printf("ID: %d\n", processos[i].id);
        printf(" Tamanho: %d\n", processos[i].tamanho);
        printf(" Endereço: %d\n", processos[i].endereco);
        printf(" Status: %s\n", processos[i].ativo ? "Ativo" : "Inativo");
        printf("-----------------\n");
    }
};