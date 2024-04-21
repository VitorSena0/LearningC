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

int main(){
    //tabuada();
    //validaSenha();
    //somaNumerosImpares();
    mediaSalarios();


    return 0;
}