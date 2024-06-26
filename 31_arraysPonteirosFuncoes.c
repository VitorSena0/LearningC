#include <stdio.h>
#include <stdlib.h>

/*
2. Tabelas de Despacho (Dispatch Tables):
Tabelas de despacho são arrays de ponteiros para funções.
Elas permitem a implementação de chamadas de função baseadas em índices,
o que pode ser útil para implementações de máquinas de estado ou sistemas de comando.
*/

// Definição de funções que serão chamadas
float soma(float a, float b){return a + b;}
float subtracao(float a, float b){return a - b;}
float multiplica(float a, float b){return a * b;}
float divide(float a, float b){return a / b;}



int main(){

    float (*operadores[])(float,float) = {soma, subtracao, multiplica, divide}; // Array de ponteiros para funções. Elimina a necessidade de usar if/else ou switch/case para chamar funções
    printf("Digite a operacao desejada (de 0 ate 3):\n");
    int escolha;
    scanf("%d", &escolha);
    printf("Digite dois numeros:\n");
    float a, b;
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", operadores[escolha](a , b));
    
    return 0;
}