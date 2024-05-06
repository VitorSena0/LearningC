#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void inverte(char palavra[],int tamanho){
   char palavraCopia[51] ; // Aumentamos o tamanho da cópia em 1 para o terminador nulo

    for (int i = 0; i < tamanho; i++) { // Usamos tamanho em vez de strlen(palavra)
        palavraCopia[i] = palavra[tamanho - 1 - i]; // Invertemos os caracteres
    }
    for(int i = 0; i < tamanho; i++){
        palavra[i] = palavraCopia[i];
    }
    palavraCopia[tamanho] = '\0'; // Adicionamos o terminador nulo no final da string invertida

}

int main(){
    /*
    char palavra[50], palavraCopia[50];
    int saoIguais;
    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; 
    strcpy(palavraCopia, palavra);
    strrev(palavraCopia);
    saoIguais = strcmp(palavraCopia, palavra);
    saoIguais == 0? printf("Eh palindromo") : printf("Nao eh palindromo");
    */

    char palavra[50];
    int tamanho;
    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    tamanho = strlen(palavra);

    inverte(palavra, tamanho);
    printf("Palavra invertida: %s", palavra);

    return 0;
}