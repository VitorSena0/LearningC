#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h> // Para usar int64_t

void aritimetrica1(){
     int array[] = {23, 4, 31, 98, 987}, tamanho = sizeof(array)/sizeof(array[0]);
     int *p = array;

    for(int i = 0; i < tamanho; i++){
        printf("Endereco: %p | ", p);
        printf("Valor: %d\n", *p); // Imprime o valor do ponteiro
        p++; // Incrementa o ponteiro, ou seja, faz ele apontar para o próximo elemento do array
    }
    for(int i = 0; i < tamanho; i++){
        printf("Endereco: %p | ", p+i);
        printf("Valor: %d\n", p[i]); // Imprime o valor do ponteiro
        // O uso de p[i] é equivalente a *(p+i) que é equivalente a p++

        /*
        
        Para acesso simples e legível: Use p[i] se você está escrevendo código que deve ser facilmente compreendido por outras pessoas (ou por você mesmo no futuro).
        Para deixar claro o uso de ponteiros: Use *(p + i) se você quer destacar que está fazendo aritmética de ponteiros.
        Para iteração eficiente: Use p++ dentro de loops onde você deseja avançar o ponteiro através dos elementos do array.

        Em resumo, p[i] é geralmente a melhor escolha para a maioria dos casos devido à sua legibilidade e familiaridade.
        *(p + i) é útil quando você quer ser explícito sobre a aritmética de ponteiros, e p++ é ideal para iterações onde o
         ponteiro precisa ser modificado para apontar para o próximo elemento.

        */
    }
}

void aritimetrica2(){
    int array[] = {23, 4, 31, 98, 987}, tamanho = sizeof(array)/sizeof(array[0]);
    int *p = array;
    int *q = &array[0];
    printf("Endereco: 1 - %p | 2 - %p", (void*)p, (void*)&p[0]);// O casting (void*) é necessário para evitar warnings
    printf("\nEndereco: 1 - %p | 2 - %p", (void*)q, (void*)&q[0]);// O casting (void*) é necessário para evitar warnings
    printf("\nEndereco: 1 - %p | Elemento: %d", (p+3), *(p+3));
    printf("\nEndereco: 1 - %p | Elemento: %d", (p+5), *(p+5)); //Se tentar acessar um elemento que excede o tamanho do array, o programa pode travar, ou pior, pode acessar um endereço de memória que não pertence ao array

    int *r = &array[1], *s = &array[4];
    printf("\n\n\nEndereco: 1 - %p | 2 - %p", (void*)r, (void*)s);// O casting (void*) é necessário para evitar warnings
    printf("\nValores: %td", (s-r)); // A diferença entre dois ponteiros é um inteiro que representa o número de elementos entre eles
}

void comparacao_ponteiros(){
    int array[] = {23, 4, 31, 98, 987}, tamanho = sizeof(array)/sizeof(array[0]);
    int *p = array;
    int *q = &array[0];    
    int *r = &array[1], *s = &array[4];

    if(r < s){ // Se r aponta para um endereço de memória menor que s então retorna 1, caso contrário retorna 0
        printf("\n\nr < s");
    }else{
        printf("\n\nr > s");
    }
    if(p == q){ // Se p aponta para o mesmo endereço de memória que q então retorna 1, caso contrário retorna 0
        printf("\n\np == q");
    }else{
        printf("\n\np != q");
    }

    printf("\n\n%d\n", *(r+3));
    printf("%d\n", *(s-3));
    printf("%d\n", (s-r));
    printf("%d\n", (r < s));
    r += 3; // Incrementa o ponteiro r em 3 posições, fazendo com que o r aponte para o 4º elemento do array (987)
    s -= 1; // Decrementa o ponteiro s em 1 posição, fazendo com que o s aponte para o 3º elemento do array (98)
    printf("%d\n", (*r < *s)); // 987 < 98

}

void somarNumPonteiros(){
    int array[] = {23, 4, 31, 98, 987}, soma = 0, tamanho = sizeof(array)/sizeof(array[0]);
    int *p;
    printf("%d\n\n", *(array+1)); // 4

    for(p = array; p < &array[tamanho]; p++){
/*  for(p = array; p < array + tamanho; p++)    Também pode ser escrito assim, já que o nome da lista também é de certa forma um ponteiro*/    
        soma += *p;
    }
        printf("%d\n", soma);
}

int main(){

    //aritimetrica1();
    //aritimetrica2();
    //comparacao_ponteiros();
    somarNumPonteiros();
    return 0;
}