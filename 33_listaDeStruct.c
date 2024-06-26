#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define funcionarios 3

typedef struct{
    char *nome;
    char *funcao;
    float salario;
} Trabalhador;

int main(){
    Trabalhador trab1[funcionarios];
    for(int i = 0; i < funcionarios; i++){
        printf("Digite o nome do funcionario %d: ", i+1);
        trab1[i].nome = (char *) malloc(50 * sizeof(char));
        fgets(trab1[i].nome, 50, stdin);
        trab1[i].nome[strcspn(trab1[i].nome, "\n")] = 0;
        printf("Digite a funcao do funcionario %d: ", i+1);
        trab1[i].funcao = (char *) malloc(50 * sizeof(char));
        fgets(trab1[i].funcao, 50, stdin);
        trab1[i].funcao[strcspn(trab1[i].funcao, "\n")] = 0;
        printf("Digite o salario do funcionario %d: ", i+1);
        scanf("%f", &trab1[i].salario);
        getchar();
        printf("\n");
    }
    for(int i = 0; i < funcionarios; i++){
        printf("Relatorio do funcionario %d:\n", i+1);
        printf("Nome: %s\n", trab1[i].nome);
        printf("Funcao: %s\n", trab1[i].funcao);
        printf("Salario: %.2f\n\n", trab1[i].salario);
            free(trab1[i].nome);
            free(trab1[i].funcao);
    }
    


    return 0;
}