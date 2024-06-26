#include <stdio.h>
#include <stdlib.h>

// Os ponteiros para funções são usados para passar funções como argumentos para outras funções.

// Definição de uma função que aceita dois inteiros e retorna um inteiro
int soma(int a, int b) {
    return a + b;
}

void minhaFuncao() {
    printf("Dentro da funcao!\n");
}

int main() {
    // Ponteiro para função que aceita dois inteiros e retorna um inteiro
    int (*ponteiroSoma)(int, int);
    // Ponteiro para função que não aceita argumentos e não retorna nada
    void (*ponteiroFuncao2)();

    // Atribuindo o endereço da função ao ponteiro
    ponteiroFuncao2 = &minhaFuncao;

    // Chamando a função através do ponteiro
    ponteiroFuncao2();

    // Também podemos omitir o operador & ao atribuir o endereço da função
    ponteiroFuncao2 = minhaFuncao;
    ponteiroFuncao2();

    // Imprimindo o endereço da função
    printf("Endereco da funcao: %p\n", (void *)ponteiroFuncao2);

    // Atribuindo o endereço da função ao ponteiro
    ponteiroSoma = soma;

    // Usando o ponteiro para chamar a função
    int resultado = ponteiroSoma(3, 4);
    printf("Resultado da soma: %d\n", resultado);

    // Imprimindo o endereço da função
    printf("Endereco da funcao soma: %p\n", (void *)ponteiroSoma);

    return 0;
}