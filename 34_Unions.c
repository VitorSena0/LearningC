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

int main(){
    loja l1;
    l1.produto.livro.titulo = "O Senhor dos Aneis";
    l1.produto.livro.autor = "J.R.R. Tolkien";
    l1.produto.livro.paginas = 1200;
    l1.preco = 50.0;
    printf("Titulo: %s\n", l1.produto.livro.titulo);
    printf("Tamanho %d\n", sizeof(l1));


    return 0;
}