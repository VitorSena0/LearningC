#include <stdio.h>
#include <stdlib.h>

void matrizes1()
{
    int idadeVetor[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    char sexo[10] = {'M', 'F', 'M', 'F', 'M', 'F', 'M', 'F', 'M', 'F'};
    float notas[10] = {10, 9.5, 8.6, 7.3, 6, 5.5, 4.3, 3.0}; // 3 posições vazias, sendo preenchidas com 0

    char nome[50] = "Vitor leonardo sena de lima";
    printf("Tamanho: %d\n", sizeof(sexo));
    printf("Tamanho: %d\n", sizeof(notas));
    printf("Tamanho: %d\n", sizeof(idadeVetor));
    printf("Tamanho: %d\n", sizeof(nome));

    int tamanho = sizeof(idadeVetor) / sizeof(idadeVetor[0]);

    /* for(int i = 0; i < tamanho; i++){
     printf("Idade: %d\n", idadeVetor[i]);
     printf("Sexo: %c\n", sexo[i]);
     printf("Nota: %.2f\n", nota[i]);
 };
 */

    for (int i = 0; i < tamanho; i++)
    {
        if (notas[i] != 0)
        { // Verifica se a nota não é vazia (0)
            notas[i] *= 1.5;
            printf("Nota: %.2f\n", notas[i]);
        }
    }
}

void designador_Indice_Alcance()
{
    int lista[10] = {[0 ... 9] = 1};                 // Inicializa todos os elementos da lista com 1, os ... são chamados de designadores de alcance e são usados para inicializar um intervalo de elementos de uma lista
    int lista2[10] = {[0 ... 4] = 1, [5 ... 9] = 2}; // Inicializa os elementos de 0 a 4 com 1 e de 5 a 9 com 2
    int lista3[10] = {[0] = 1, [9] = 2, [4] = 3};    // Inicializa os elementos 0 e 9 com 1 e 2 respectivamente, são chamados de designadores de índice
    
    /*
        Se não for designado um tamanho para a lista de inicialização, o compilador vai deduzir com base no maior indice do designador especificado
    */
        int lista4[] = {[0 ... 15] = 1}; // Inicializa todos os elementos da lista com 1, o compilador deduz que o tamanho da lista é 16
        int lista5[] = {[2] = 1, [9] = 2, [4] = 3}; // Inicializa os elementos 2, 9 e 4 com 1, 2 e 3 respectivamente, o compilador deduz que o tamanho da lista é 10
        int lista6[] = {1,2,3,[5] = 30, 4, [8] = 50, 9, 9}; // Deixa zerado os elementos nos indices 3, 4, 7, pois o [5] e [8] fizeram com que pulasse esses indices

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", lista6[i]);
    }
}

int main(int argc, char const *argv[])
{
    designador_Indice_Alcance();
    return 0;
}
