#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int length(char string[]){
    int i = 0;
    while(string[i] != '\0'){
        i++;
    }
    return i;
}

void caracteres(char string[]){
    // for(int i = 0; i < length(string); i++){
    //     printf("%c\n", string[i]);
    // }
    int i = 0;
    while(string[i] != '\0'){
        printf("%c\n", string[i]);
        i++;
    
    }
}

int* somaColunas(int matriz[][3]){ // A função retona um ponteiro para um array de inteiros
    int* colunaSomadas = (int*)calloc(3, sizeof(int)); // aloca um array de 3 inteiros e inicializa com 0, o int* é um ponteiro para inteiros, o (int*) é um cast para o tipo "ponteiro para inteiro", o calloc aloca memória e inicializa com 0, recebendo como argumento o tamanho do array e o tamanho do tipo de dado;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            colunaSomadas[j] += matriz[j][i];
        }
    }
    return colunaSomadas;

}


int main(){
    srand(time(NULL));
    char string[] = "Hello, World!";

    printf("O tamanho da string eh: %d\n", length(string));
    printf("O tamanho da string (strlen) eh: %d\n\n", strlen(string));

    printf("Caracteres da string:\n");
    caracteres(string);
    printf("-------------------------\n\n");

    int matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    int* arrayColunasSomadas = somaColunas(matriz); // Iniciou-se um ponteiro de inteiros que recebe o retorno da função somaColunas
    for(int i = 0; i < 3; i++){
        printf("Soma da coluna %d: %d\n", i, arrayColunasSomadas[i]);
    }
    return 0;
}
