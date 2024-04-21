#include <stdio.h>
#include <stdlib.h>

/*----[Caracteres de escape]---------
    Quebra de linha: \n
    Tabulação: \t
    Aspas simples: \'
    Aspas duplas: \"
    Barra invertida: \\
    Retorno de carro: \r
    Form feed: \f
    Backspace: \b
    Alerta: \a
    Vertical tab: \v
    Caractere nulo: \0
*/

int main(){
    printf("\n\n\tIsto eh uma mensagem \'a\'  \\ ser impressa na tela\n\n"); // \n pula linha, \t tabulação, \'a\' aspas simples dentro de aspas duplas

    return 0;
}