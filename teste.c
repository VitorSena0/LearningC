#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void aritimetricaPonteiro(){

    int arr[3] = {10, 20, 30};

    printf("Endereço de memória do primeiro elemento (arr + 0): %p\n", (void *)(arr + 0));
    printf("Valor no primeiro elemento *(arr + 0): %d\n", *(arr + 0));

    printf("Endereço de memória do segundo elemento (arr + 1): %p\n", (void *)(arr + 1));
    printf("Valor no segundo elemento *(arr + 1): %d\n", *(arr + 1));

    printf("Endereço de memória do terceiro elemento (arr + 2): %p\n", (void *)(arr + 2));
    printf("Valor no terceiro elemento *(arr + 2): %d\n", *(arr + 2));
int arr2[10] = {0}; // Suponha que este é o seu array

// Acessando elementos do array usando o operador de ponteiro
for (int i = 0; i < 10; i++) {
    printf("%d\n", *(arr2 + i));
}

}

int fun(){
int a = 10, b = 20;
    
    {int a = 5;}
    {
        int c;
        c = b/a;
        printf("%d\n", c);
    }
}

int fun1(int);
int fun2(int);
int a = 5;



int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configura o ambiente para usar a configuração de local do sistema
    int a = 10;
    a = fun1(a);
    printf("%d\n", a);

    return 0;
}

int fun1(int b){
    b = b+10;
    b = fun2(b);
    return b;
}

int fun2(int b){
    int c;
    c = a + b;
    return c;
}