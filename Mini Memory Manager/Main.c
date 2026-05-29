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

        case 4:
            mostrar_memoria();
            break;

        default:
            break;
        }
    }
    // Loop do menu
    while (opcao != 5);

    return 0;
}