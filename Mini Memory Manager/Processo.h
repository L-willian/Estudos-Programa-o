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
} Processo;

#endif