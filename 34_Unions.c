#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void testeUnion(){
    typedef union{
        int16_t i;
        int16_t f;
        int8_t str[20];
    } uniao; // Esta union tem 20 bytes de tamanho,
            // de acordo com o maior tipo de dado que ela contém.
            // Assim, todas as variáveis da union compartilham o mesmo espaço de memória.

    uniao u1; // Declaração de uma variável do tipo union

    u1.i = 10; // Atribuição de um valor inteiro à variável i
    printf("Valor de i: %d\n", u1.i);
    strcpy(u1.str, "Hello, World!"); // Copia a string para a variável str
    u1.f = 20.5; // Atribuição de um valor float à variável f
    printf("Valor de f: %p\n",(void*)&u1.f);
    printf("Valor de str: %p\n",(void*) &u1.str);
    printf("Valor de i: %d\n", u1.i);
}

typedef struct{
        int16_t preco;
        union {
            struct{
                int8_t *titulo;
                int8_t *autor;
                int16_t paginas;
            }livro;

            struct{
                int8_t *cor;
                int8_t *design;
                uint8_t tamanho;
            }camisa;
        }produto;
}loja;


// Criando um array de vários tipos de dados
typedef union{
    int a;
    float b;
    double c;
}Data;

void multArray(){
    Data arr[5];
    arr[0].a = 10;
    arr[1].b = 20.5;
    arr[2].c = 35.5455544554555;
    printf("Valor de a: %d\n", arr[0].a);
    printf("Valor de b: %.2f\n", arr[1].b);
    printf("Valor de c: %lf\n", arr[2].c);
}

int main(){
    // loja l1;
    // loja l2;
    // l1.produto.livro.titulo = "O Senhor dos Aneis";
    // l1.produto.livro.autor = "J.R.R. Tolkien";
    // l1.produto.livro.paginas = 1200;
    // l1.preco = 50.0;
    // printf("Titulo: %s\n", l1.produto.livro.titulo);
    // l2.produto.camisa.cor = "Azul";
    // l2.produto.camisa.design = "Listrado";
    // l2.produto.camisa.tamanho = 42;
    // l2.preco = 30.0;
    // printf("Cor: %s\n", l2.produto.camisa.cor);
    // printf("Titulo: %s\n", l1.produto.livro.titulo);
    // printf("Titulo: %s\n", l1.produto.livro.autor);
    // printf("Titulo: %d\n", l1.produto.livro.paginas);
    // printf("Tamanho %s\n", l2.produto.camisa.design);
    // printf("Tamanho %d\n", l2.produto.camisa.tamanho);
    multArray();
    return 0;
}