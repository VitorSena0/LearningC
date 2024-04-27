#include <stdio.h>
#include <stdlib.h>

void bufferTeclado(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF); // Cada vez que o usuário digita algo no teclado, o caractere é armazenado em um buffer, e o buffer é esvaziado toda vez que o usuário pressiona a tecla enter, com isso o while funciona da seguinte forma: enquanto o caractere digitado for diferente de '\n' (enter) e diferente de EOF (end of file), o buffer será esvaziado
}

int main() {
    printf("Hello, World!\n");
    printf("Valor retornado: %d  \n\n", printf("vitor leonardo sena de lima!!\n")); // retorna o numero de caracteres impressos

    //system("pause");// Faz uma pausa no programa para que o usuário possa ver a saída
    //printf("\nPressione qualquer tecla para continuar...\n"); // Exibe uma mensagem para o usuário para simular o comando system("pause"), pois o comando system("pause") não é portável, ou seja, não funciona em todos os sistemas operacionais
    //getchar(); // Aguarda o usuário pressionar uma tecla para continuar
    int num, caractere;    
    caractere = scanf("%d", &num);
    bufferTeclado();
    printf("Numero: %d\n", num);
    printf("Caractere??: %d\n", num);
    return 0;
}