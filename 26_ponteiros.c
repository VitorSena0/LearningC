#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h> // Para usar int64_t
//    https://chatgpt.com/share/5d9aad03-e1a5-48e6-80c7-99f76eb7d8a7
void entendedoPonteiro(){
    int x = 10;
    int *ptr = &x, *ptr2; // O & é usado para obter o endereço de uma variável. 
    // Sempre inicie um ponteiro com um endereco valido, pois não iniciá-lo pode causar um erro de segmentação (segmentation fault).

    printf("Endereco ponteiro: %p\n\n", ptr);
    printf("Valor do ponteiro: %d\n\n", *ptr);
    printf("Endereco ponteiro x: %p\n\n", &x);

    *ptr = 20;

    printf("Novo valor do ponteiro: %d\n\n", *ptr);
    ptr2 = ptr;
    printf("Endereco ponteiro 2: %p\n\n", ptr2);
    printf("Valor do ponteiro 2: %d\n\n", *ptr2);
    *ptr2 = 30;
    *ptr = *ptr2;
    printf("Novo valor do ponteiro: %d\n\n", *ptr);

}

int* max_min(int array[], int tamanho, int *max, int *min){
    *min = *max = array[0];
    int *vetorMenorMaior = (int*)calloc(2, sizeof(int));

    for(int i = 0; i < tamanho; i++){
        if(array[i] <= *min){
            *min = array[i];
        }
         if(array[i] >= *max){
            *max = array[i];
        }
    }
    vetorMenorMaior[0] = *min;
    vetorMenorMaior[1] = *max;
    return vetorMenorMaior;

}
/*
int *func(){ // Não é recomendado retornar o endereço de uma variável local, pois a variável local é destruída após a função retornar, gerando um erro.
    int i = 10;
    return &i;
}
 // O correto seria alocar memória dinamicamente para a variável e retornar o endereço da memória alocada.
 // Ou usar uma variável gloval e retornar seu endereço.
 // Ou passar o endereço da variável como argumento da função.

*/

void impressaoEndereco(){
     // Declaração de variáveis
    int var32 = 123;
    int64_t var64 = 456;
    
    // Ponteiros para as variáveis
    int *ptr32 = &var32;
    int64_t *ptr64 = &var64;
    
    // Impressão dos endereços em hexadecimal usando %p
    printf("Endereço de var32 (32 bits): %p\n", (void*)ptr32);
    printf("Endereço de var64 (64 bits): %p\n", (void*)ptr64);
    
    // Impressão dos endereços em hexadecimal sem o prefixo 0x
    printf("Endereço de var32 (32 bits): %08X\n", (unsigned int)(uintptr_t)ptr32);
    printf("Endereço de var64 (64 bits): %016lX\n", (unsigned long)(uintptr_t)ptr64);
}

int main(){
    int min, max, array[] = {23, 4, 31, 98, 987, 32, 10, 123, 986, 50, 3, 4, 5}, tamanho = sizeof(array)/sizeof(array[0]);

    int *resultado = max_min(array, tamanho, &max, &min);
    for (int i = 0; i < 2; i++)
    {
        printf("Resultado: %d\n", resultado[i]);
    }

    ////////////////////////////////////////

    // int *p = func();
    // printf("\n%d\n", *p);

    ////////////////////////////////////////


    return 0;
}
