#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int rangeAleatorio(int min, int max){
    return floor((rand() % (max - min + 1)) + min);
};

int main(){
    int num[10];

    printf("Numeros gerados aleatoriamente: \n");
    int tamanho = sizeof(num)/sizeof(num[0]);

    srand(time(NULL)); // Inicializa o gerador de numeros aleatorios, passando o tempo atual como parametro gernado uma nova seed;

    // for(int i = 0; i < tamanho; i++){
    //     num[i] = rand(); // Gera um numero aleatorio entre 0 e 99, o rand gera números aleatórios entre 0 e RAND_MAX, que é uma constante definida na biblioteca stdlib.h que é no máximo 32767
    //     printf("%d\n", num[i]);
    // };
    int numero, geracao = 0;

    int aleatorioAte100 = rand() % 100; // Gera um numero aleatorio entre 0 e 99

    while(1){
        numero = rangeAleatorio(1, 100000000);
        //printf("%d\n", numero);
        geracao++;
        if(numero == 32767){
            printf("O numero maximo foi gerado em %d tentativas\n", geracao);
            break;
        }
    }

    return 0;
}