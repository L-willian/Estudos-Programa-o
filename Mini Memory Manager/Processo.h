// Struct do processo

#ifndef PROCESSO_H
#define PROCESSO_H

typedef struct
{
    // Identificador do processo
    int id;

    // Tamanho da memória necessária
    int tamanho;

    // Endereço de início da memória alocada
    int endereco;

    // Status do processo (ativo ou inativo)
    int ativo;
} Processo;

// Prototipo das funções
void adicionar_processo(
    int id,
    int tamanho,
    int endereco);

// Lista de processos
void listar_processos();

#endif