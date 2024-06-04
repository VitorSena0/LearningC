#include <stdio.h>

int a = 3;

void n(int *x){
    *x = *x * a; // x recebe o valor do endereço de x vezes a
    printf("x: %d\n", *x);
}

void m(int *y){ // m recebe o endereço de a
    int a = 1; // a é uma variável local diferente de a global
    a = *y - a; // a recebe o valor do endereço de y menos a
    n(&a); // n recebe o endereço de a local
    printf("a: %d\n", a);
}

int main(){

    m(&a); // m recebe o endereço de a

    return 0;
}