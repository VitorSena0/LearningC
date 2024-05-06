#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Biblioteca para manipulação de strings, contém como principais funções: strlen(), strcpy(), strcat(), strcmp(), strlwr(), strupr(), strrev(), strset(), strnset(), strstr(), strtok()
                      /*
                        strlen() - Retorna o tamanho da string, parametros: strlen(string)
                        strcpy() - Copia uma string para outra, parametros: strcpy(string_destino, string_origem)
                        strcat() - Concatena duas strings, parametros: strcat(string_destino, string_origem)
                        strcmp() - Compara duas strings, parametros: strcmp(string1, string2)
                        strlwr() - Converte a string para minúsculas, parametros: strlwr(string)
                        strupr() - Converte a string para maiúsculas, parametros: strupr(string)
                        strrev() - Inverte a string, parametros: strrev(string)
                        strset() - Preenche a string com um caractere, parametros: strset(string, caractere)
                        strnset() - Preenche os primeiros n caracteres da string com um caractere, parametros: strnset(string, caractere, n)
                        strstr() - Procura uma substring dentro de uma string, parametros: strstr(string, substring)
                        strtok() - Divide a string em tokens, parametros: strtok(string, delimitadores)
                        strcspn() - Retorna o tamanho da string antes de encontrar um caractere, parametros: strcspn(string, caractere encontrado)
                        strchr() - Retorna a primeira ocorrência de um caractere na string, parametros: strchr(string, caractere), ou strrchr() para retornar a última ocorrência

                      */        
        
/*
    Problemas do scanf() :
    - Não é possível ler strings com espaços
    - Não limpa o buffer do teclado
    - Não verifica se o valor digitado é um número
    - Se o usuário digitar uma palavra maior que o tamanho da variável,
     pode causar um estouro de buffer ou "buffer overflow", 
     que é um erro de memória que ocorre quando um programa grava mais dados em um buffer do que ele pode armazenar,
      levando a um vazamento de memória ou a uma sobrescrita de memória.
    Solução: fgets() e sscanf(), fgets() para ler strings com espaços e sscanf() para verificar se o valor digitado é um número	
                fgets():
        Sigla: "File Gets"
        Significado: "File Gets" é uma função da linguagem C que lê uma linha de texto de um arquivo ou da entrada padrão (geralmente o teclado) e a armazena em uma string. Ela é utilizada para ler uma linha inteira de texto, incluindo espaços em branco, até encontrar um caractere de nova linha (\n) ou atingir um número máximo de caracteres especificado.
        Uso comum: fgets() é frequentemente utilizada para ler dados de arquivos de texto ou para ler entrada do usuário de forma segura, pois evita estouros de buffer ao especificar o tamanho máximo da string a ser lida.

    sscanf():
        Sigla: "String Scanf"
        Significado: "String Scanf" é uma função da linguagem C que analisa uma string formatada como entrada e extrai dados dessa string de acordo com um formato especificado, semelhante ao scanf(). No entanto, ao contrário de scanf(), sscanf() lê de uma string em vez da entrada padrão.
        Uso comum: sscanf() é útil para analisar strings que contenham dados estruturados, como números, datas, ou outros tipos de dados, de acordo com um padrão específico. Ele permite que você extraia informações de uma string semelhante ao que scanf() faz com a entrada padrão.


*/


void limparBuffer(){
    char c;
    while (c = getchar() != '\n' && c != EOF);
}

void upperCase(){
    char string[100];
    int tamanho = sizeof(string) / sizeof(string[0]);

    printf("Digite uma string: ");
    fgets(string, tamanho, stdin); // fgets() para ler strings com espaços


    for(int i = 0; i < tamanho; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            string[i] = string[i] - 32; // 32 é a diferença entre as letras maiúsculas e minúsculas
        }
    }
    printf("String em maiuscula: %s", string);
     // while (string[i] != '\0') // Enquanto não chegar ao final da string
    // {
    //     if (string[i] >= 'a' && string[i] <= 'z') // Se for uma letra minúscula
    //     {
    //         string[i] = string[i] - 32;
    //     }
    //     i++;
    // }
}

void lerNome(){
    char nome[20], nome2[20];
    char teste[20];
    int tamanho = sizeof(nome) / sizeof(nome[0]);

    printf("Digite seu nome: ");
    //scanf("%s", nome); // O problema de ler string com o scanf é que ele para de ler quando encontra um espaço e pode causar um buffer overflow
    //scanf("%[^\n]", nome); // %[^\n] para ler a string até encontrar um \n, só que ainda  pode causar um buffer overflow
    //scanf("%19[^\n]", nome); // %[^\n] para ler a string até encontrar um \n,e o 19 limita o tamanho da string resolvendo o problema do buffer overflow, o tamanho é 19 pois o tamanho da string é 20 e o último caractere é o \0
        //limparBuffer();
    //printf("Digite seu nome 2: ");
    //scanf("%[^A-Z0-9]", teste); // %[A-Z0-9] para ler apenas letras maiúsculas e números
    /*
        Aviso!! não utilizar o gets() pois ele não verifica o tamanho da string e pode causar um buffer overflow
    */

   fgets(nome, tamanho, stdin); // fgets() para ler strings com espaços, o tamanho é 20 pois o tamanho da string é 20 e o último caractere é o \0
   nome[strcspn(nome, "\n")] = '\0'; // strcspn() para encontrar o tamanho da string antes de encontrar um \n e substituir por \0
    printf("Digite seu nome 2: ");
   fgets(nome2, tamanho, stdin); // fgets() para ler strings com espaços, o tamanho é 20 pois o tamanho da string é 20 e o último caractere é o \0
   nome2[strcspn(nome2, "\n")] = '\0';
   strcat(nome,nome2);
    int tam = strlen(nome);
    printf("Seu tamanho eh: %d\n", tam); // -1 para não contar o \n, caso não utilize o strcspn() para substituir o \n por \0
    printf("Seu nome eh: %s\n\n", nome);
    printf("Seu nome eh: %s\n\n", nome);
    //printf("Seu nome eh: %s", teste);

}

void strcmp_funcao(){
    char string1[20], string2[20];
    int tamanho = sizeof(string1) / sizeof(string1[0]);

    printf("Digite a primeira string: ");
    fgets(string1, tamanho, stdin); // fgets() para ler strings com espaços
    string1[strcspn(string1, "\n")] = '\0'; // strcspn() para encontrar o tamanho da string antes de encontrar um \n e substituir por \0
    printf("Digite a segunda string: ");
    fgets(string2, tamanho, stdin); // fgets() para ler strings com espaços
    string2[strcspn(string2, "\n")] = '\0'; // strcspn() para encontrar o tamanho da string antes de encontrar um \n e substituir por \0
    int igual = strcmp(string1, string2); // strcmp() para comparar duas strings, retorna 0 se forem iguais, 1 ou -1 se forem diferentes e também -1 se a primeira string for menor que a segunda e 1 se a primeira string for maior que a segunda

    if(igual){
        printf("As strings sao diferentes\n");
    }else{
        printf("As strings sao iguais\n");
    }

}

void copiarString(){
    char string1[20], string2[20];
    int tamanho = sizeof(string1) / sizeof(string1[0]);

    printf("Digite a primeira string: ");
    fgets(string1, tamanho, stdin); // fgets() para ler strings com espaços
    string1[strcspn(string1, "\n")] = '\0'; // strcspn() para encontrar o tamanho da string antes de encontrar um \n e substituir por \0
    printf("Digite a segunda string: ");
    fgets(string2, tamanho, stdin); // fgets() para ler strings com espaços
    string2[strcspn(string2, "\n")] = '\0';
    strcpy(string2, string1); // strcpy() para copiar uma string para outra
    printf("String copiada: %s\nString Original: %s", string2, string1);

}

void procuraCaractere(){
    char string[20] = {"abacate"}, *letra, *letra2;

    letra = strchr(string, 'a'); // strchr() para encontrar a primeira ocorrência de um caractere na string
    letra2 = strrchr(string, 'a'); // strrchr() para encontrar a última ocorrência de um caractere na string
    printf("A primeira ocorrencia de 'a' eh: %c\n", *letra);
    printf("A primeira ocorrencia de 'a' eh: %c\n\n", *(letra + 1)); // Isto é uma aritmetica de ponteiros, para acessar o próximo caractere
    //Se não encontrar o caractere, a função retorna NULL 
    printf("\nA ultima ocorrencia de 'a' eh: %c\n", *letra2);
    printf("A ultima ocorrencia de 'a' eh: %c", *(letra2 + 1)); // Isto é uma aritmetica de ponteiros, para acessar o próximo caractere
}

void procuraSubstring(){
    char string[20] = {"abacate"}, *letra;

    letra = strstr(string, "tev"); // strstr() para encontrar uma substring dentro de uma string, quiser achar uma palavra inteira especifica dentro de um texto
    // Se não encontrar a substring, a função retorna NULL
    if(letra != NULL){
        printf("A substring 'tev' foi encontrada em: %c\n", *letra);
        printf("A substring 'tev' foi encontrada em: %c, %c\n", *(letra + 1), *(letra + 2)); // Isto é uma aritmetica de ponteiros, para acessar o próximo caractere
    }else{
        printf("A substring 'tev' nao foi encontrada");
        }
}

void minusculeMaiuscula(){
    char string[20] = {"abacate"}, *letra;

    letra = strlwr(string); // strlwr() para converter a string para minúsculas
    printf("String em minusculas: %s\n", letra);
    letra = strupr(string); // strupr() para converter a string para maiúsculas
    printf("String em maiusculas: %s", letra);
}

void stringParaPalavra(){
    char string[50];

    printf("Digite uma string: ");
    fgets(string, 50, stdin);
    string[strcspn(string, "\n")] = '\0'; // strcspn() para encontrar o tamanho da string antes de encontrar um \n e substituir por \0
    // O strtok() retorna um ponteiro para a primeira palavra da string, se não encontrar nenhuma palavra, retorna NULL
    char *palavra;
    palavra = strtok(string, " "); // strtok() para dividir a string em tokens, o segundo parâmetro é o delimitador, o delimitador pode conter mais de um tipo, como strtok(string,",.; "), para delimitar por vírgula, ponto e vírgula e espaço
    while(palavra != NULL){ // Enquanto não chegar ao final da string
        printf("%s\n", palavra);
        palavra = strtok(NULL, " "); // O NULL é para continuar a busca a partir da última palavra encontrada
    }

    /*
    Exemplo de uso da função strtok():

    char str[] = "Hello, world! How are you?";
    char delimiters[] = " ,!?";
    char *token;

    token = strtok(str, delimiters);
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiters);
    }

    printf("String original após o uso de strtok: %s\n", str);

    A função strtok substituiu todas as ocorrências dos delimitadores pelo caracter null '\0'.
    Isso me fez perceber que o printf só imprime uma string até achar esse caracter '\0'.
    Logo se quiser a string preservada, deve-se copiá-la em outra string protótipo que será "destruída".
    */
    
}

void matrizStrings(){
    char nomes[5][20]; // Matriz de strings, 5 strings de 20 caracteres
    int tamanho = sizeof(nomes) / sizeof(nomes[0]), tamanhoNome[5] = {0, 0, 0, 0, 0};
    for(int i = 0; i < tamanho; i++){ // Percorre apenas a linha pois a coluna é apenas o tamanho limite da string
            printf("Digite o nome da pessoa %d: ", i + 1);
            fgets(nomes[i], 20, stdin); // fgets() para ler strings com espaços
            nomes[i][strcspn(nomes[i], "\n")] = '\0'; // strcspn() pega a palavra e depois vai até a ultima letra e substitui por \0
            tamanhoNome[i] = strlen(nomes[i]); // strlen() para pegar o tamanho da string
    }

    for(int i = 0; i < tamanho; i++){
        printf("Nome da pessoa %d: %s tamanho da Palavra: %d\n\n", i + 1, nomes[i], tamanhoNome[i]);
    }

}

int main()
{   
    // https://chat.openai.com/share/0ad813f0-9b9c-42fe-af6a-8ff798d8ff57
    //upperCase();
    //lerNome();
    //strcmp_funcao();
    //copiarString();
    //procuraCaractere();
    //procuraSubstring();
    //minusculeMaiuscula();
    //stringParaPalavra();
    matrizStrings();

    return 0;
}