#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    // Solicita ao usuario o texto a ser descriptografado
    char texto[100];
    int chave = 3;

    // Le o texto do usuario
    printf("Digite o texto a ser descriptografado: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove o caractere de nova linha, se presente
    texto[strcspn(texto, "\n")] = '\0';

    // Descriptografa o texto usando a cifra de Cesar
    for (int i = 0; texto[i] != '\0'; i++)
    {
        texto[i] = texto[i] - chave;
    }

    // Exibe o texto descriptografado
    printf("Texto descriptografado: %s\n", texto);

    return 0;
}