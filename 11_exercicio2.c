#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maiorMenor(){
    int a, b, c, maior, menor;
    
    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = a > b? a > c? a : c : b > c? b : c;
    menor = a < b? a < c? a : c : b < c? b : c;

    printf("O maior valor eh: %d\nO menor valor eh: %d", maior, menor);
};

void contaNumeros(){
    int num1, num2, num3, num4, num5, contaPositivos = 0, contaNegativos = 0;
    printf("Digite cinco valores: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    
    if(num1 > 0) contaPositivos++;
    else contaNegativos++;
    if(num2 > 0) contaPositivos++;
    else contaNegativos++;
    if(num3 > 0) contaPositivos++;
    else contaNegativos++;
    if(num4 > 0) contaPositivos++;
    else contaNegativos++;
    if(num5 > 0) contaPositivos++;
    else contaNegativos++;

    printf("Numeros positivos: %d\nNumeros negativos: %d", contaPositivos, contaNegativos);
};

void multiplo(){
    int num, multiplo;
    printf("Digite um numero: ");
    scanf("%d", &num);
    multiplo = num % 2 == 0 || num % 3 == 0 || num % 5 == 0? 1 : 0;
    if(multiplo) printf("O numero eh multiplo");
    else printf("Nao eh divisivel por nenhum");
};

void cambio() {
    printf("Escolha uma opção: \n1 - Para converter do Real para o Dolar\n2 - Para converter do Dolar para o Real\n");
    int opcao;
    float real, dolar;
    scanf("%d", &opcao);
    switch (opcao){
        case 1:
            printf("\n------------[Conversao para o Dolar]--------------------\n\n");
            printf("Digite o valor em real: ");
            scanf("%f", &real);

            dolar = real * 5.20;
            printf("O valor convertido eh igual a: $ %.2f", dolar);
            break;
        case 2:
            printf("\n------------[Conversao para o Real]--------------------\n\n");
            printf("Digite o valor em dolar: ");
            scanf("%f", &dolar);

            real = dolar / 5.20;
            printf("O valor convertido eh igual a: RS %.2f", real);
            break;
        default:
            break;
    }
}; 

int main(){

    //maiorMenor();
    //contaNumeros();
    //multiplo();
    cambio();


    return 0;
}