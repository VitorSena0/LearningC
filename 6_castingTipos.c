#include <stdio.h>
#include <stdlib.h>

int main(){
    // Para realizar o casting de tipos de dados, basta colocar o tipo de dado entre parênteses antes do valor a ser convertido.
    // Exemplo:
    int inteiro = 10;
    float real = 10.5545;
    char caractere = '5';
    double realDuplo = 10.545634656464;

    printf("Inteiro: %f\n", (float)inteiro);
    printf("Real: %d\n", (int)real);
    printf("Caractere: %d\n", caractere);
    printf("Real Duplo: %f\n", (float)realDuplo);

    return 0;
}