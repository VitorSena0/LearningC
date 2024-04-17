#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!\n");
    printf("Valor retornado: %d  \n\n", printf("vitor leonardo sena de lima!!\n")); // retorna o numero de caracteres impressos

    system("pause");// Faz uma pausa no programa para que o usuário possa ver a saída
    printf("\nPressione qualquer tecla para continuar...\n"); // Exibe uma mensagem para o usuário para simular o comando system("pause"), pois o comando system("pause") não é portável, ou seja, não funciona em todos os sistemas operacionais
    getchar(); // Aguarda o usuário pressionar uma tecla para continuar

    return 0;
}