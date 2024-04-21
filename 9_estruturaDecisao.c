#include <stdio.h>
#include <stdlib.h>

int main(){
    // O verdadeiro e falso em c é representado por 0 e 1 ou 0 e diferente de 0
    int a = 10, b = 20;

    int maior = a > b ? a : b; // Operador ternário, se a for maior que b, maior recebe a, senão maior recebe b
    printf("O maior valor eh: %d", maior);

    if(a> 0) printf("\nO valor de A eh positivo");
    else if(a == 0) printf("\nO valor de A eh zero");
    else printf("\nO valor de A eh negativo"); 
    // As chaves são opcionais quando tem apenas uma instrução, se tiver mais de uma instrução é obrigatório o uso das chaves

    printf("Resultado logico: %d", a > 20);
    printf("Resultado logico: %d", b <= 20);


    return 0;
};