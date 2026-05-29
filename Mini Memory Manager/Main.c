// Menu
// Interação com o usuario

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Memoria.h"

int main()
{
    // Menu de opções
    int opcao;
    int tamanho;
    int id = 1;
    do
    {
        printf("1. Criar processo\n");
        printf("2. Liberar processo\n");
        printf("3. Listar processos\n");
        printf("4. Exibir memória\n");
        printf("5. Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // Processar a opção escolhida
        switch (opcao)
        {
        case 1:

            // Criar processo
            printf("Digite o tamanho do processo: ");

            scanf("%d", &tamanho);
            if (tamanho <= 0)
            {
                printf("Tamanho inválido. Tente novamente.\n");
                break;
            }
            int inicio = alocar_memoria(tamanho, id);

            if (inicio == -1)
            {
                printf("Memoria insuficiente.\n");
            }
            else
            {
                printf("Processo %d alocado no endereço %d.\n", id, inicio);
                id++;
            }

            break;

        case 4:
            mostrar_memoria();
            break;
        }
    }
    // Loop do menu
    while (opcao != 5);

    return 0;
}