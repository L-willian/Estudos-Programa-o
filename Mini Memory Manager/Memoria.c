// Alocar memoria
// Liberar memoria
// Mostrar mapa de memoria

#include <stdio.h>
#include "Memoria.h"

// Tamanho da memória
#define TAM_MEMORIA 1024

// Memoria principal
char memoria[TAM_MEMORIA];

// Função para mostrar o mapa de memória
void mostrar_memoria()
{
    printf("Mapa de Memória:\n");
    for (int i = 0; i < TAM_MEMORIA; i++)
    {
        printf("%c", memoria[i] ? '#' : '.');
    }
    printf("\n");
}

