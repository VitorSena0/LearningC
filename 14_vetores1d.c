#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
int idadeVetor[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    char sexo[10] = {'M', 'F', 'M', 'F', 'M', 'F', 'M', 'F', 'M', 'F'};
    float notas[10] = {10, 9.5, 8.6, 7.3, 6, 5.5, 4.3, 3.0}; // 3 posições vazias, sendo preenchidas com 0

    char nome[50] = "Vitor leonardo sena de lima";
    printf("Tamanho: %d\n", sizeof(sexo));
    printf("Tamanho: %d\n", sizeof(notas));
    printf("Tamanho: %d\n", sizeof(idadeVetor));
    printf("Tamanho: %d\n", sizeof(nome));

    int tamanho = sizeof(idadeVetor)/sizeof(idadeVetor[0]);

       /* for(int i = 0; i < tamanho; i++){
        printf("Idade: %d\n", idadeVetor[i]);
        printf("Sexo: %c\n", sexo[i]);
        printf("Nota: %.2f\n", nota[i]);
    };
    */

    for(int i = 0; i < tamanho; i++){
        if (notas[i] != 0) { // Verifica se a nota não é vazia (0)
            notas[i] *= 1.5;
            printf("Nota: %.2f\n", notas[i]);
        }
    }

    return 0;
}
