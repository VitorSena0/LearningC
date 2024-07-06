#include <stdio.h>

// Função que retorna um inteiro
int add(int a, int b) {
    return a + b;
}

// Função que retorna um inteiro
int subtract(int a, int b) {
    return a - b;
}

// Função que retorna um ponteiro para um array de ponteiros para funções
int (*(*createFunctionPointerArray())[])() {
    // Array estático de ponteiros para funções que recebem dois inteiros e retornam um inteiro
    static int (*functionPointers[])(int, int) = {&add, &subtract};
    return &functionPointers;
}

int main() {
    // Ponteiro para um array de ponteiros para funções
    int (*(*functionPtrArray)[])() = createFunctionPointerArray();

    // Chama a primeira função no array e imprime o resultado
    int result = (*(*functionPtrArray)[0])(10, 5); // Chama add(10, 5)
    int result2 = (*(*functionPtrArray)[1])(15, 5); // Chama add(10, 5)
    printf("Result of add(10, 5): %d\n", result);
    printf("Result of add(15, 5): %d\n", result2);

    return 0;
}
