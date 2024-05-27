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

void _toUpper(char string[]){
    for(int i = 0; string[i] != '\0'; i++){
        // if(string[i] >= 'a' && string[i] <= 'z'){ // Em alguns casos é melhor usar a função toUpper() da biblioteca ctype.h
        //     string[i] -= 32;
        // }
        string[i] = toupper((unsigned char)string[i]);
    }

}

void _toLower(char string[]){
    for(int i = 0; string[i] != '\0'; i++){
        // if(string[i] >= 'A' && string[i] <= 'Z'){ // Em alguns casos é melhor usar a função toLower() da biblioteca ctype.h
        //     string[i] += 32;
        // }
        string[i] = tolower((unsigned char)string[i]);
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configura o ambiente para usar a configuração de local do sistema

    char string[] = "Hello World, Vitór Leonardo Séna de Limã!";
    _toUpper(string);
    printf("\n%s\n", string);
    _toLower(string);
    printf("\n%s\n", string);

    return 0;
}