#include <stdio.h>
#include <stdlib.h>

void bufferTeclado(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF); // Cada vez que o usuário digita algo no teclado, o caractere é armazenado em um buffer, e o buffer é esvaziado toda vez que o usuário pressiona a tecla enter, com isso o while funciona da seguinte forma: enquanto o caractere digitado for diferente de '\n' (enter) e diferente de EOF (end of file), o buffer será esvaziado
}


int main(){

    int valor, valor2;
    printf("Digite um valor: ");
    scanf("%d", &valor); // & é o operador de endereço, ele serve para passar o endereço da variável para a função scanf e o %d é o especificador de formato, ele serve para indicar que o valor digitado será um número inteiro
    printf("O valor digitado foi: %d\n\n", valor);

    system("pause");

    float numero;
    printf("Digite um numero real: ");
    scanf("%f", &numero); // %f é o especificador de formato para números reais
    printf("O valor digitado foi: %.2f\n\n", numero); // %.2f é o especificador de formato para números reais com duas casas decimais
    bufferTeclado();

    system("pause");

    char letra;

    printf("Digite o sexo [m|f]: ");
    scanf("%c", &letra);
    printf("O sex digitado foi: %c\n\n", letra);;

    system("pause");



    return 0;
}