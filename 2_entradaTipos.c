#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bufferTeclado(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF); // Cada vez que o usuário digita algo no teclado, o caractere é armazenado em um buffer, e o buffer é esvaziado toda vez que o usuário pressiona a tecla enter, com isso o while funciona da seguinte forma: enquanto o caractere digitado for diferente de '\n' (enter) e diferente de EOF (end of file), o buffer será esvaziado
}

void scanfInteiro (){
    int valor, valor2;
    printf("Digite um valor: ");
    scanf("%d", &valor); // & é o operador de endereço, ele serve para passar o endereço da variável para a função scanf e o %d é o especificador de formato, ele serve para indicar que o valor digitado será um número inteiro
    printf("O valor digitado foi: %d\n\n", valor);
};

void scanfFloat(){
    float numero;
    printf("Digite um numero real: ");
    scanf("%f", &numero); // %f é o especificador de formato para números reais
    printf("O valor digitado foi: %.2f\n\n", numero); // %.2f é o especificador de formato para números reais com duas casas decimais
    bufferTeclado();
};

void scanfChar() {
    char letra;

    printf("Digite o sexo [m|f]: ");
    scanf("%c", &letra);
    printf("O sex digitado foi: %c\n\n", letra);;
};

void lerGetchar(){
    // A função getchar() lê um caractere do buffer do teclado
    char letra2;

    printf("Digite uma letra: ");
    letra2 = getchar(); // A função getchar() lê um caractere do buffer do teclado

    printf("O caractere lido foi: %c", letra2);
};

void lerGetc(){
    // A função getc() lê um caractere de um arquivo e também pode ser usada para ler um caractere do buffer do teclado
    //FILE *arquivo;
    char letra;

    printf("Digite uma letra: ");
    letra = getc(stdin); // A função getc() lê um caractere do buffer do teclado, stdin é um ponteiro para o arquivo de entrada padrão (teclado)
    printf("O caractere lido foi: %c\n", letra);
};

void lerFgetc (){
    // A função fgetc() lê um caractere de um arquivo e também pode ser usada para ler um caractere do buffer do teclado
    //FILE *arquivo;
    char letra;

    printf("Digite uma letra: ");
    letra = fgetc(stdin); // A função fgetc() lê um caractere do buffer do teclado, stdin é um ponteiro para o arquivo de entrada padrão (teclado)
                         // o f do fgetc() significa file, ou seja, a função fgetc() lê um caractere de um arquivo
    printf("O caractere lido foi: %c\n", letra);
};

void lerString(){
    char nome[50];

    printf("Digite seu nome: ");
    //scanf("%s", nome); // %s é o especificador de formato para strings  e o & não é necessário, pois o nome é um vetor de caracteres e o scanf lê a string até encontrar um espaço em branco, logo não é recomendado para nomes com espaços
    fgets(nome, sizeof(nome), stdin); // fgets() lê uma string até encontrar um enter, o sizeof(nome) é o tamanho do vetor nome e o stdin é um ponteiro para o arquivo de entrada padrão (teclado)
    printf("O nome digitado foi: %s\n", nome);
    printf("Tamanho da string: %d\n",  strlen(nome)); // strlen() retorna o tamanho da string
    nome[strcspn(nome, "\n")] = 0; // strcspn() retorna o tamanho da string até encontrar um '\n' e o '\n' é substituído por '\0' (caractere nulo), pois o fgets() armazena o '\n' no vetor nome, logo o '\n' é substituído por '\0' para que o '\n' não seja exibido na tela
                                    // Os argumentos do strcspn são a string e o caractere a ser procurado
    printf("Tamanho da string sem 'barra n': %d\n",  strlen(nome)); // strlen() retorna o tamanho da string
};

void variosNumeros(){
    int num1, num2, num3;

    printf("Digite tres numeros: \n");
    scanf("%d %d %d", &num1, &num2, &num3); // %d %d %d é o especificador de formato para três números inteiros
    printf("Os numeros digitados foram: %d, %d e %d\n", num1, num2, num3);
};

int main(){

    //scanfInteiro();
    //system("pause");

    //scanfFloat();
    //system("pause");

    //scanfChar();
    //system("pause");

    //bufferTeclado();

    //lerGetchar();
    //system("pause");

    //lerGetc();
    //system("pause");

    //lerFgetc();
    //system("pause");

    lerString();
    system("pause");

    bufferTeclado();

    variosNumeros();
    system("pause");

    
    return 0;
}