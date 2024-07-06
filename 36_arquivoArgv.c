#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *arquivo; // Ponteiro para o arquivo
    char linha[4000]; // Buffer para armazenar cada linha do arquivo, armazena até 4000 caracteres

    // Verifica se foi passado exatamente um argumento
    if (argc != 2) {
        printf("\nUso: %s <nome_arquivo>\n", argv[0]);
        return 1;
    }

    // Abre o arquivo para leitura
    arquivo = fopen(argv[1], "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Lê e imprime o conteúdo do arquivo linha por linha
    // while (fgets(linha, sizeof(linha), arquivo) != NULL) {
    //     printf("%s", linha);
    // }

    // Fecha o arquivo
    char c;
    int i = 0;
    while((c = fgetc(arquivo)) != EOF){
        if(c >= 97 && c <= 122){
            c -= 32;
            linha[i] = c;

        }
        printf("%c", c);
        i++;
    }
    fprintf(arquivo, "%s\n", linha);
    printf("\n\n%d\n", i);

    fclose(arquivo);

    return 0;
}
