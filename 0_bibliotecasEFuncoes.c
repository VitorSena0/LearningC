#include <stdio.h> //  entrada e saída padrão
/*
    printf(): Utilizada para imprimir texto formatado no console ou em outros fluxos de saída. Argumento: printf("Texto %d", 10), retorna Retorna o número de caracteres impressos (positivo) ou um valor negativo se ocorrer um erro;
    scanf(): Utilizada para ler dados de entrada formatados a partir do console ou de outros fluxos de entrada. Argumento: scanf("%d", &variavel), Retorna o número de itens de entrada bem-sucedidos atribuídos, que geralmente é o número de especificadores de formato na string de formato;
    fprintf(): Similar ao printf(), mas permite especificar o arquivo de saída. Argumento: fprintf(arquivo, "Texto %d", 10), retorna Retorna o número de caracteres impressos (positivo) ou um valor negativo se ocorrer um erro;
    fscanf(): Similar ao scanf(), mas permite ler dados de um arquivo de entrada. Argumento: fscanf(arquivo, "%d", &variavel), Retorna o número de itens de entrada bem-sucedidos atribuídos, que geralmente é o número de especificadores de formato na string de formato;
    fopen(): Utilizada para abrir um arquivo. Argumento: fopen("arquivo.txt", "r"), retorna um ponteiro para o arquivo aberto ou NULL se ocorrer um erro;
    fclose(): Utilizada para fechar um arquivo. Argumento: fclose(arquivo), retorna zero se o arquivo for fechado com sucesso, caso contrário, retorna EOF;
    fgets(): Utilizada para ler uma linha de texto de um arquivo. Argumento: fgets(buffer, 255, arquivo) ou fgets(variavel, tamanho string, stdin), retorna um ponteiro para a string lida ou NULL se ocorrer um erro;
    fputs(): Escreve uma string em um arquivo ou em uma saída padrão. Argumento: fputs("Texto exemplo", arquivo) ou fputs(variavel, stdout), Retorna um número negativo em caso de erro, e um número não negativo (número de caracteres escritos) em caso de sucesso;
    feof(): Verifica se o ponteiro de arquivo atingiu o final do arquivo. Argumento: feof(arquivo) Retorna um valor não-zero se o indicador de fim de arquivo estiver definido para o arquivo, caso contrário, retorna zero., Retorna um valor não-zero se o indicador de fim de arquivo estiver definido para o arquivo, caso contrário, retorna zero.;
    fgetc(): Lê um caractere de um arquivo. Argumento: fgetc(arquivo), retorna o caractere lido como um unsigned char convertido para um int ou EOF se ocorrer um erro ou o final do arquivo for atingido;
    rewind(): Retorna o ponteiro de arquivo para o início do arquivo. Argumento: rewind(arquivo), não retorna nada;
*/
#include <stdlib.h> //  manipulação de memória, conversão de tipos, geração de números aleatórios e controle de programas;
/*
    malloc(): Aloca um bloco de memória de um determinado tamanho. Argumento: malloc(10 * sizeof(int)), retorna um ponteiro para o bloco de memória alocado ou NULL se a alocação falhar;
    calloc(): Aloca um bloco de memória de um determinado tamanho e inicializa todos os seus bits com zero. Argumento: calloc(10, sizeof(int)), retorna um ponteiro para o bloco de memória alocado ou NULL se a alocação falhar;
    realloc(): Altera o tamanho de um bloco de memória previamente alocado. Argumento: realloc(ponteiro, 20 * sizeof(int)), retorna um ponteiro para o bloco de memória realocado ou NULL se a alocação falhar;
    free(): Libera um bloco de memória previamente alocado. Argumento: free(ponteiro), não retorna nada;
    exit(): Termina a execução do programa. Argumento: exit(0), não retorna nada;
    rand(): Gera um número pseudoaleatório. Argumento: rand(), retorna um número inteiro aleatório no intervalo de 0 a RAND_MAX;
    srand(): Define a semente para a função rand(). Argumento: srand(0), não retorna nada;
    abs(): Retorna o valor absoluto de um número inteiro. Argumento: abs(-10), retorna 10;
    atof(): Converte uma string para um número de ponto flutuante. Argumento: atof("3.14"), retorna 3.14;
    atoi(): Converte uma string para um número inteiro. Argumento: atoi("10"), retorna 10;
    atol(): Converte uma string para um número inteiro longo. Argumento: atol("1000000"), retorna 1000000;
    atoll(): Converte uma string para um número inteiro longo longo. Argumento: atoll("1000000000"), retorna 1000000000;
    bsearch(): Realiza uma pesquisa binária em um array ordenado. Argumento: bsearch(&chave, vetor, 10, sizeof(int), comparar), retorna um ponteiro para o elemento encontrado ou NULL se a chave não for encontrada;
    qsort(): Ordena um array. Argumento: qsort(vetor, 10, sizeof(int), comparar), não retorna nada;
    system(): Executa um comando do sistema. Argumento: system("ls"), retorna o status de saída do comando ou -1 se ocorrer um erro;
    labs(): Retorna o valor absoluto de um número inteiro longo. Argumento: labs(-1000000), retorna 1000000;
*/
#include <string.h> // manipulação de strings
/*
    strcpy(): Copia uma string para outra. Argumento: strcpy(destino, origem), retorna um ponteiro para a string de destino;
    strncpy(): Copia os primeiros n caracteres de uma string para outra. Argumento: strncpy(destino, origem, n), retorna um ponteiro para a string de destino;
    strcat(): Concatena duas strings. Argumento: strcat(destino, origem), retorna um ponteiro para a string de destino;
    strncat(): Concatena os primeiros n caracteres de uma string com outra. Argumento: strncat(destino, origem, n), retorna um ponteiro para a string de destino;
    strcmp(): Compara duas strings. Argumento: strcmp(string1, string2), Retorna um valor inteiro negativo se str1 for menor que str2, 0 se forem iguais, e um valor inteiro positivo se str1 for maior que str2.
    strncmp(): Compara os primeiros n caracteres de duas strings. Argumento: strncmp(string1, string2, n), retorna um valor inteiro menor que, igual a, ou maior que zero se a string1 for menor que, igual a, ou maior que a string2, respectivamente;
    strlen(): Retorna o comprimento de uma string. Argumento: strlen(string), retorna o comprimento da string;
    strchr(): Retorna um ponteiro para a primeira ocorrência de um caractere em uma string. Argumento: strchr(string, caractere), retorna um ponteiro para a primeira ocorrência do caractere na string ou NULL se o caractere não for encontrado;
    strrchr(): Retorna um ponteiro para a última ocorrência de um caractere em uma string. Argumento: strrchr(string, caractere), retorna um ponteiro para a última ocorrência do caractere na string ou NULL se o caractere não for encontrado;
    strstr(): Retorna um ponteiro para a primeira ocorrência de uma substring em uma string. Argumento: strstr(string, substring), retorna um ponteiro para a primeira ocorrência da substring na string ou NULL se a substring não for encontrada;
    strtok(): Divide uma string em tokens. Argumento: strtok(string, delimitadores), retorna um ponteiro para o token ou NULL se não houver mais tokens;
    memset(): Preenche um bloco de memória com um valor específico. Argumento: memset(buffer, valor, tamanho), retorna um ponteiro para o bloco de memória preenchido;
    strrev(): Inverte uma string. Argumento: strrev(string), retorna um ponteiro para a string invertida;
    strcspn(): Retorna o comprimento do prefixo de uma string que não contém um conjunto de caracteres. Argumento: strcspn(string, caracteres), retorna o comprimento do prefixo da string que não contém os caracteres especificados;
*/

#include <locale.h> // configuração de localidade

#include <ctype.h> // manipulação de caracteres - toupper, tolower, isalpha, isdigit e outras funções
/*
    tolower - Converte o caracter em minúsculo: tolower('A') retorna 'a'
    toupper - Converte caracter minúsculo em maiúsculo: toupper('a') retorna 'A'
    isalnum - Verifica se o caracter é alfanumérico: isalnum('a') retorna 1
    isalpha - Verificar se o caracter é uma letra do alfabeto: isalpha('a') retorna 1
    iscntrl - Verificar se o caracter é um caracter de controle: iscntrl('\n') retorna 1
    isdigit - Verificar se o caracter é um digito decimal: isdigit('1') retorna 1
    isgraph - Verifica se o caracter tem representação gráfica: isgraph(' ') retorna 0
    islower - Verifica se o caracter é minúsculo: islower('a') retorna 1
    isprint - Verifica se o caracter é imprimível: isprint(' ') retorna 1
    ispunct - Verifica se o caracter é um caracter de pontuação: ispunct('.') retorna 1
    isspace - Verificar se o caracter é um espaço em branco: isspace(' ') retorna 1
    isupper - Verifica se o caracter é uma letra maiúscula: isupper('A') retorna 1
    isxdigit - Verifica se o caracter é um dígito hexadecimal: isxdigit('F') retorna 1
*/

#include <stddef.h> // definições de tipos e macros
/*
    NULL - Representa um ponteiro nulo
    size_t - Tipo de dado usado para representar tamanhos de objetos
    wchar_t - Tipo de dado usado para representar caracteres de largura ampla
    ptrdiff_t - Tipo de dado usado para representar a diferença entre dois ponteiros
    offsetof - Retorna o deslocamento de um membro em uma estrutura

*/

int main()
{
    int resultado;
    resultado = iscntrl('\a');
    // https://chat.openai.com/share/6e9bff2f-f209-4a48-9b94-840505304415
    printf("\nresultado: %d\n", resultado); 
    return 0;
}