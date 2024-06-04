#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h> // Esta biblioteca é necessária para usar as funções toUpper() e toLower()

void _toUpper(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        // if(string[i] >= 'a' && string[i] <= 'z'){ // Em alguns casos é melhor usar a função toUpper() da biblioteca ctype.h
        //     string[i] -= 32;
        // }
        string[i] = toupper((unsigned char)string[i]);
    }
}

void _toLower(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        // if(string[i] >= 'A' && string[i] <= 'Z'){ // Em alguns casos é melhor usar a função toLower() da biblioteca ctype.h
        //     string[i] += 32;
        // }
        string[i] = tolower((unsigned char)string[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configura o ambiente para usar a configuração de local do sistema

    char string[] = "Hello World, Vitór Leonardo Séna de Limã!";
    _toUpper(string);
    printf("\n%s\n", string);
    _toLower(string);
    printf("\n%s\n", string);

    return 0;
}