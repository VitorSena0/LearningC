#include <stdio.h>
// https://chatgpt.com/share/96057e13-5544-4f51-8f17-069ae455b986
int main() {
    FILE *fptr;
    char nome_arquivo[] = "dados.txt";
    char modo[] = "w";
    char dados[] = "Ola, Mundo! vitor leonardo sena de lima vitor leonardo sena de lima vitor leonardo sena de lima vitor leonardo sena de lima vitor leonardo sena de limavitor leonardo sena de";

    // Abrir arquivo para escrita
    fptr = fopen(nome_arquivo, modo);

    // Verificar se a abertura foi bem-sucedida
    if (fptr == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escrever dados no arquivo
    fprintf(fptr, "%s\n", dados);

    // Fechar o arquivo
    fclose(fptr);

    // Abrir arquivo para leitura
    fptr = fopen(nome_arquivo, "r");

    // Verificar se a abertura foi bem-sucedida
    if (fptr == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    // Ler e imprimir dados do arquivo
    char buffer[400];
    if(fgets(dados, sizeof(buffer), fptr) != NULL) {
        printf("Dados lidos do arquivo: %s\n", dados);
    } else {
        printf("Erro ao ler dados do arquivo.\n");
    }

    // Fechar o arquivo
    fclose(fptr);

    return 0;
}
