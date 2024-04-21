#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca para acentuação

int main(){
    setlocale(LC_ALL, "Portuguese"); // 
    //printf("%s\n", setlocale(LC_ALL, "Portuguese")); // Função para acentuação, ele utliza o unsigned na tabela ASCII, fazendo com que o número de bits suba para 255, armazenando um número maior de caracteres, incluindo os caracteres especiais.

    printf("Coração:\n");

    return 0;
}