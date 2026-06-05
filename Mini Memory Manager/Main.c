// Menu
// Interação com o usuario

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Memoria.h"
#include "Processo.h"

int main()
{

    // Inicializar a memória
    inicializar_memoria();

    // Menu de opções
    int opcao;
    int tamanho;
    int id = 1;
    int inicio;
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
            inicio = alocar_memoria(tamanho, id);

            if (inicio == -1)
            {
                printf("Memoria insuficiente.\n");
            }
            else
            {
                adicionar_processo(id, tamanho, inicio);
                printf("Processo %d alocado no endereço %d.\n", id, inicio);
            }

            id++;

            break;

        case 2:
        {
            // Liberar processo
            int id_processo;

            printf("Digite o ID do processo a ser liberado: \n");
            scanf("%d", &id_processo);

            if (id_processo <= 0)
            {
                printf("ID de processo inválido.\n");
                break;
            }
            int resultado = desalocar_processo(id_processo);
            if (resultado == 1)
            {
                liberar_memoria(id_processo);
                printf("Processo %d liberado.\n", id_processo);
            }
            else if (resultado == 0)
            {
                printf("Processo %d já está inativo.\n", id_processo);
            }
            else
            {
                printf("Processo %d não encontrado.\n", id_processo);
            }
            break;
        }

        case 3:
            // Listar Processos
            listar_processos();
            break;

        case 4:
            mostrar_memoria();
            break;
        }
    }
    // Loop do menu
    while (opcao != 5);

    // Liberar memória alocada para os processos antes de sair
    liberar_processo();

    return 0;
}