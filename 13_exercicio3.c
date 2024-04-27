#include <stdio.h>
#include <stdlib.h>

void tabuada(){
    int num;
    printf("Digite um numero entre um 1 e 10: ");
    scanf("%d", &num);
    if(num < 1 || num > 10){
        printf("Número inválido\n");
        return;
    };
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    };
};

void validaSenha(){
    int senha = 123456, senhaValida;
    do{
        int senhaDigitada;
        printf("Digite a senha: ");
        scanf("%d", &senhaDigitada);
        senhaValida = senhaDigitada == senha? 0 : 1;
        if(!senhaValida){
            printf("\nAcesso permitido!\n\n");
        }else{
            printf("\nAcesso nao permitido!\n\n");
        }
    }while(senhaValida);
}

void somaNumerosImpares(){
    int soma = 0;

    for(int i = 1; i < 1000; i+= 2 ){
        soma += i;
    };
    printf("O total de numeros impares somados eh: %d", soma);
}
/*14) Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
média dos salários informados, o salário mais alto e o salário mais baixo.*/
void mediaSalarios(){
    int funcionarios;
    float maiorSalario = 0, menorSalario = 0, mediaSalarios, somaSalarios = 0;
    printf("Quantos funcionarios na empresa? ");
    scanf("%d", &funcionarios);

    for(int i = 0; i < funcionarios; i++ ){
        float salario;
        printf("\nDigite o salario do %d funcionario: ", i+1); // i+1 para não começar do 0
        scanf("%f", &salario);
        maiorSalario = maiorSalario > salario? maiorSalario : salario; // Se o maior salario for maior que o salario atual, ele mantem o maior salario, se não, ele recebe o salario atual
        menorSalario = menorSalario == 0? salario : menorSalario < salario? menorSalario : salario;// Se o menor salario for 0, ele recebe o primeiro salario, se não, ele verifica se o salario atual é menor que o menor salario, se for, ele recebe o salario atual

        somaSalarios += salario; // Soma os salarios
    };

    mediaSalarios = somaSalarios / funcionarios; // Calcula a media dos salarios
    
    printf("\n\nA media de salarios eh de: %.2f\nO maior salario eh: %.2f\nO menor salario eh: %.2f\n", mediaSalarios, maiorSalario, menorSalario);
};

/*Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
números inteiros entre 1 e 10.*/
void mmc(){
    printf("\n-----------[mmc de 1 a 10]-----------\n\n");
    int num = 8, achou = 0;
    unsigned int ehDivisivel = 0;
    while(!achou){
        for(int i = 1; i <=10; i++ ){
            if(num % i == 0){
                ehDivisivel += 1;
            }else{
                ehDivisivel = 0;
                break;
            };
        };
        if(ehDivisivel == 10 ){
            achou = 1;
        };
        num += 2;// Pois assim corta pela metade as tentativas, testando apneas os pares, ficando mais eficiente
    };
printf("O numero encontrado foi: %d", num-1);
};

/*Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de
pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo
será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
Exemplo de entrada:
2 2
3 -2
-8 -1
-7 1
0 2
Exemplo de saída:
primeiro
quarto
terceiro
segundo
*/
void coordenadas(){
    int x, y;
    printf("Digite as coordenadas: \n");
    while(x != 0 & y != 0){
        scanf("%d %d", &x, &y);
        if(x == 0 | y == 0) break;
        if(x > 0 & y > 0) printf("Primeiro quadrante\n");
        if(x < 0 & y > 0) printf("Segundo quadrante\n");
        if(x < 0 & y < 0) printf("Terceiro quadrante\n");
        if(x > 0 & y < 0) printf("Quarto quadrante\n");
        // Foi utlizado operadores bitwise, que comparam por bits
        
    };
};

void mongeGraos(){
    //unsigned long long int num = 1;
    long double num = 1; // foi utlizado o long double para armazenar um numero muito grande
                        // Pois o long long int não suporta o numero de graos
    for(int i = 1; i <= 64; i++ ){
        num *= 2; // Multiplica por 2 a cada casa
    };

    __mingw_printf("Total de graos: %Lf", num);
    // O __mingw_printf é utilizado para imprimir o long double no windows
};

void asteriscoPorLinha(){
    int linhas = 10, coluna = 20;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < coluna; j++){
            printf("*");
        };
        printf("\n");
    };
};

void asteriscoPorlinha2(){
    int coluna = 20;
    for(int i = 0; i < coluna; i++){
        for(int j = 0; j <= i; j++){
                printf("*");
            };
        printf("\n");
        };
    };

int main(){
    //tabuada();
    //validaSenha();
    //somaNumerosImpares();
    //mediaSalarios();
    //mmc();
    //coordenadas();
    //mongeGraos();
    //asteriscoPorLinha();
    //asteriscoPorlinha2();

    return 0;
}