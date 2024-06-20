#include <stdio.h>
#include <stdlib.h>

void ponteiro_bidimenArray(){
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p = &array[0][0]; // É equivalete a usar, *(p + 0) ou a[0]
    int *q = &array[0][0];
    int *r = &array[1][0];
    int *s = &array[1][0];
    printf("Endereco: 1 - %p | 2 - %p", (void*)p, (void*)q);// O casting (void*) é necessário para evitar warnings
    printf("\nEndereco: 1 - %p | 2 - %p\n\n", (void*)r, (void*)s);// O casting (void*) é necessário para evitar warnings
    printf("\nEndereco: 1 - %p | Elemento: %d", (p+3), *(p+3));
    printf("\nEndereco: 1 - %p | Elemento: %d", (p+5), *(p+5)); //Se tentar acessar um elemento que excede o tamanho do array, o programa pode travar, ou pior, pode acessar um endereço de memória que não pertence ao array

    int *t = &array[0][1], *u = &array[1][2];
    printf("\n\n\nEndereco: 1 - %p | 2 - %p", (void*)t, (void*)u);// O casting (void*) é necessário para evitar warnings
    printf("\nValores: %td", (u-t)); // A diferença entre dois ponteiros é um inteiro que representa o número de elementos entre eles
}

void acessoAosArrays(){
    int arr[][3] = {{1,2,3},{4,5,6}};
    int *p = &arr[0][0];
    printf("%d\n", *(p+1));
    printf("%p\n",(void*)(&arr[0][1]));
    printf("%d\n", *(&arr[0][1]));
    printf("%d\n", *(&arr[0][1] + 3));
    printf("%d\n", *(*(arr + 1)+2)); // arr + 1 = &arr[1][0] e *(arr + 1) = arr[1] e *(arr + 1) + 2 = &arr[1][2], ou seja, esta forma é equivalente a arr[1][2]
    printf("%p\n", &*(*(arr + 1)+2)); // Isto é equivalente a &arr[1][2], só que utilizando ponteiros 
}

void apontaParaArrayCompleto(){
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*p)[3] = array; // p é um ponteiro para um array de 3 elementos
    /*
    Não é necessário (nem possível) especificar a primeira dimensão ao declarar um ponteiro para um array multidimensional em C.
    A primeira dimensão é controlada pela aritmética do ponteiro.
    Quando você declara um ponteiro para um array multidimensional, você precisa especificar o tamanho de todas as dimensões,
    exceto a primeira. Isso ocorre porque o C não armazena realmente informações sobre o tamanho total do array,
    apenas o tamanho de uma "linha" do array.
    */
    printf("%d\n", p[1][2]); // 6
    printf("%d\n", **p); // 1
    printf("%d\n", *(*p + 4)); // 5. Primeiro ele pega o endereço do primeiro elemento do primeiro array e depois incrementa 4 posições depois acessa o valor.
    printf("%d\n", *((*p + 2)+1)); // 5. Primeiro ele pega o endereço do primeiro elemento do primeiro array e depois incrementa 2 posições na colula, depois acrescenta 1 posição na linha e acessa o valor.
    printf("%p\n", p); // 1. Aponta para o primeiro array
    printf("%p\n", &**p); // 1. Aponta para o primeiro elemento do primeiro array
}

void incrementaProxArray(){
    int arr[][3] = {1,2,3,4,5,6};
    int (*p)[3] = arr;
    printf("%d %d\n", (*p)[1], (*p)[2]); // A saida é 2 3 porque (*p)[1] é equivalente a p[0][1] e (*p)[2] é equivalente a p[0][2]
    p++; // Incrementa o ponteiro para o próximo array
    printf("%d %d", (*p)[1], (*p)[2]); // A saida é 5 6 porque (*p)[1] é equivalente a p[1][1] e (*p)[2] é equivalente a p[1][2], pois p++ incrementa o ponteiro para o próximo array
}

int i = 0, j = 1;
void trocaPonteiros(int *p, int *q){
    p = q; // p aponta para o mesmo endereço de memória que q, deixando de apontar para i e passando a apontar para j
    *q = 2; // O valor de q é alterado para 2, assim como o valor de j
    printf("%d %d", i, j); // 0 2, e não 2 2

}

int c = 4, *d = &c, **e = &d;
// Esta função recebe um inteiro x e dois ponteiros inteiros pt e ppt. Ela incrementa o valor apontado por ppt, armazena o valor apontado por ppt em y, incrementa o valor apontado por pt, armazena o valor apontado por pt em z, incrementa x em 3 e retorna a soma de x, y e z.
int somaPonteiroEmPonteiro(int x,int *pt,int **ppt ){
    int y,z;
    **ppt += 1;
    y = **ppt;
    *pt += 2;
    z = *pt;
    x += 3;
    return x + y + z;
}

int main(){
    //ponteiro_bidimenArray();
    //apontaParaArrayCompleto();
    //incrementaProxArray();
    trocaPonteiros(&i, &j);
    printf("\n\nResultado: %d\n", somaPonteiroEmPonteiro(c, d, e)); // Passado os valores de 'd' e 'e', que são ponteiros, e 'c' que é um inteiro passado por valor e não por referência

    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p = *array;
    printf("%d\n", *(p+1));

    return 0;
}

