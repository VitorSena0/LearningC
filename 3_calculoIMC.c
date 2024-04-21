#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  limparBuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
};

int main() {
    float peso, altura, imc;
    char sexo, nome[50];
    int idade;
    
    printf("Digite resspectivamente seu nome, idade, peso, altura e sexo: \n");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o \n do final da string
    scanf("%d\n", &idade);
    scanf("%f %f %c", &peso, &altura, &sexo); // dar um espaço entre os números e o caractere para que o scanf() possa ler o caractere faz com que o buffer do teclado seja limpo, pois o \n é lido pelo scanf() e não pelo fgets()

    imc = peso / (altura * altura);

    printf("%s, voce tem %d anos, eh do sexo %c, pesa %.2f kg, mede %.2f metros e seu IMC eh %.2f\n", nome, idade, sexo, peso, altura, imc);

}