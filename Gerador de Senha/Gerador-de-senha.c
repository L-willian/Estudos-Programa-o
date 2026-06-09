#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    // Variáveis para armazenar as opções do usuário:
    int tamanho;

    // Solicita ao usuário o tamanho da senha:
    printf("Digite o tamanho da senha desejada: \n");
    scanf("%d", &tamanho);

    // Define o tamanho da senha com base na entrada do usuário

    char *password = malloc(tamanho + 1); // Aloca memória para a senha
    // Conjuntos de caracteres para a geração da senha:
    char *uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *lowercase = "abcdefghijklmnopqrstuvwxyz";
    char *digits = "0123456789";
    char *special = "!@#$%^&*()-_=+[]{}|;:,.<>?";

    // Calcula o comprimento de cada conjunto de caracteres:
    int uppercase_tamanho = strlen(uppercase);
    int lowercase_tamanho = strlen(lowercase);
    int digits_tamanho = strlen(digits);
    int special_tamanho = strlen(special);

    // Inicializa o gerador de números aleatórios:
    srand(time(NULL) * getpid());

    // Gera a senha:
    for (int i = 0; i < tamanho; i++)
    {
        int tipo = rand() % 4; // Escolhe aleatoriamente o tipo de caractere

        if (tipo == 0)
        {
            password[i] = uppercase[rand() % uppercase_tamanho]; // Adiciona letra maiúscula
        }
        else if (tipo == 1)
        {
            password[i] = lowercase[rand() % lowercase_tamanho]; // Adiciona letra minúscula
        }
        else if (tipo == 2)
        {
            password[i] = digits[rand() % digits_tamanho]; // Adiciona dígito
        }
        else
        {
            password[i] = special[rand() % special_tamanho]; // Adiciona caractere especial
        }
    }

    password[tamanho] = '\0'; // Adiciona o caractere nulo no final da string

    // Exibe a senha gerada:
    printf("Senha gerada: \n%s\n", password);

    free(password); // Libera a memória alocada para a senha

    return 0;
}
