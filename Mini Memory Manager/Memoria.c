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

int alocar_memoria(int tamanho, int id)
{
    int livres = 0;
    // Verificar se há espaço suficiente na memória
    for (int i = 0; i < TAM_MEMORIA; i++)
    {

        {
            if (memoria[i] == 0)
            {
                livres++;
            }
            else
            {
                livres = 0;
            }
        }
        if (livres == tamanho)
        {
            int inicio = i - tamanho + 1;
            for (int j = inicio; j <= i; j++)
            {
                // Marcar a memória alocada com o ID
                memoria[j] = id;
            }
            // Retorna o endereço de início da memória alocada
            return i;
        }
    }
    // Retorna -1 se não houver espaço suficiente para alocar o processo
    return -1;
}