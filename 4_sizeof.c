#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void somaNumInt() {
    
};

int main(){
    int inteiro; // utiliza o %d para imprimir
    long int inteiroLongo;// utiliza %ld para imprimir // O long int não tem diferença de tamanho em bytes para o int, porém o limite de armazenamento é maior.
    long long int inteiroMuitoLongo; // utiliza %lld para imprimir ou %lli
    unsigned long long int inteiroMuitoLongoSemSinal; // utiliza %llu para imprimir
    unsigned long long int inteiroMuitoLongoSemSinal2 = 9223372036854775807; // utiliza %llu para imprimir
    unsigned int inteiroSemSinal; // utiliza %u para imprimir
    short int inteiroCurto; // utiliza %hd para imprimir
    float real; // utiliza %f para imprimir
    double realDuplo; // utiliza %lf para imprimir
    long double realDuploLongo; // utiliza %Lf para imprimir, no windowns %Lf não funciona, apenas em sistemas linux e mac, para o ler o long double no windows, utiliza-se __MINGW_printf("%Lf", realDuploLongo);
    char caractere; // utiliza %c para imprimir
    char string[50]; // utiliza %s para imprimir
    // 1 byte = 8 bits
    printf("Tamanho em bytes de um inteiro: %d bytes\n", sizeof(inteiro)); // O limite de armazenamento é -32768 a 32767 
    printf("Tamanho em bytes de um inteiroLongo: %d bytes\n", sizeof(inteiroLongo)); // O limite de armazenamento é -2147483648 a 2147483647
    printf("Tamanho em bytes de um inteiroMuitoLongo: %d bytes\n", sizeof(inteiroMuitoLongo)); // O limite de armazenamento é -9223372036854775808 a 9223372036854775807
    printf("Tamanho em bytes de um inteiroMuitoLongoSemSinal: %d bytes \n", sizeof(inteiroMuitoLongoSemSinal)); // O limite de armazenamento é 0 a 18446744073709551615
    printf("Tamanho em bytes de um inteiroMuitoLongoSemSinal2: %lld \n", sizeof(inteiroMuitoLongoSemSinal2)); // O limite de armazenamento é 0 a 18446744073709551615
    printf("Tamanho em bytes de um inteiroSemSinal: %d bytes\n", sizeof(inteiroSemSinal)); // O limite de armazenamento é 0 a 65535
    printf("Tamanho em bytes de um inteiroCurto: %d bytes\n", sizeof(inteiroCurto)); // O limite de armazenamento é -32768 a 32767, porém o tamanho em bytes é menor que o inteiro.
    printf("Tamanho em bytes de um real: %d bytes\n", sizeof(real)); // O limite de armazenamento é 1.2E-38 a 3.4E+38
    printf("Tamanho em bytes de um realDuplo: %d bytes\n", sizeof(realDuplo)); // O limite de armazenamento é 2.3E-308 a 1.7E+308
    printf("Tamanho em bytes de um caractere: %d bytes\n", sizeof(caractere)); // O limite de armazenamento é -128 a 127 ou 0 a 255  
    printf("Tamanho em bytes de um string: %d bytes\n", sizeof(string)); // O limite de armazenamento é 50 caracteres

    // O sizeof não é uma função, é um operador que retorna o tamanho em bytes de um tipo de dado neste caso.

    return 0;
}