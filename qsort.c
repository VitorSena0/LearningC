#include <stdio.h>
#include <stdlib.h>

int comparaInt(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int numeros[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    qsort(numeros, tamanho, sizeof(int), comparaInt);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
