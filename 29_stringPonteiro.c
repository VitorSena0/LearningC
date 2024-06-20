#include <stdio.h>
#include <stdlib.h>

void stringPonteiro(){
    char string []= "Hello, World!";
    char *ppt = "Ola, mundo!";
    char *p = string;
    printf("%s\n", string);
    printf("%s\n", p);
    p++; // Ao fazer isso ele passa a apontar para o segundo caractere da string, assim considerando o segundo caractere como o inicio da string
    printf("%s\n", p);
    char *q = string;
    printf("%c\n", q[0]);
    for(int i = 0; i < 13; i++){
        printf("%c ", q[i]);
    }
    printf("\n");
    for(int i = 0; i < 13; i++){
        printf("%c ", *(q + i));
    }
    printf("\n");
    for(int i = 0; i < 12; i++){
        printf("%c ", *(ppt + i));
    }
    printf("\n");
    printf("%s\n", ppt);
    printf("%c\n", "hello"[0]);

    printf("%.5s\n", ppt); // Imprime os 5 primeiros caracteres da string
    printf("%8.5s\n", ppt); // Imprime os 5 primeiros caracteres da string, mas com um espaço de 8 caracteres antes

}

int main(){

    stringPonteiro();
    return 0;
}