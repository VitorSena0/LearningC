#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i = 0; i < 3; i++){
        printf("Linha %d: ", i);
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        };
        printf("\n");
    };

    printf("\n\n");

    int matriz2[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    
    for(int i = 0; i < 3; i++){
        printf("Linha %d: ", i);
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz2[i][j]);
        };
        printf("\n");
    };

    int matriz3[3][3] = {0}; // Inicializa a matriz com 0
    int matriz4[][3] = {1,2,3,4,5,6,7,8,9}; // Mesmo com a linha vazia, o compilador pega o tamanho da coluna  e separa pra por o próximo valor na próxima linha 
    
    printf("\n\n");


    char matriz5[][4] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r'}; // Matriz com 18 elementos, 4 colunas e 4 linhas, imprimi 16 elementos
    for(int i = 0; i < 4; i++){
        printf("Linha %d: ", i);
        for(int j = 0; j < 4; j++){
            printf("%c ", matriz5[i][j]);
        };
        printf("\n");
    };
        printf("\n\n");

    int matriz6[4][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }; // Matriz com 20 elementos, 5 colunas e 8 linhas, imprimi 20 elementos
    for(int i = 0; i < 4; i++){
        printf("Linha %d: ", i);
        for(int j = 0; j < 5; j++){
            printf("%4d ", matriz6[i][j]); // %4d para alinhar os números, o 4 é o espaço que ele vai ocupar.
        };
        printf("\n");
    };

    int matriz7[2][3] = {{1, 2, 3}, {4, 5, 6}}, matriz8[2][3] = {{7, 8, 9}, {10, 11, 12}}, matriz9[2][3];
    for(int i = 0; i < 2; i++){
        printf("Linha %d: ", i);
        for(int j = 0; j < 3; j++){
            matriz9[i][j] = matriz7[i][j] + matriz8[i][j];
            printf("%2d ", matriz9[i][j]);
        };
        printf("\n");
    };
    return 0;
};