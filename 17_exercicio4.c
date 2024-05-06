#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void quadrado()
{
    int matriz1[10], matriz2[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a posicao %d: ", i);
        scanf("%d", &matriz1[i]);

        matriz2[i] = matriz1[i] * matriz1[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("O quadrado do valor %d eh %d\n", matriz1[i], matriz2[i]);
    }
};

void inverteValores()
{
    int matriz[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, tamanho = sizeof(matriz) / sizeof(matriz[0]), copia;

    for (int i = 0; i < 10; i++) // Inverte os valores da matriz, complexidade O(n)
    {
        copia = matriz[i]; // Variável temporária para armazenar o valor do elemento atual
        matriz[i] = matriz[tamanho - 1]; // O elemento atual recebe o valor do último elemento
        matriz[tamanho - 1] = copia; // O último elemento recebe o valor do elemento atual
        tamanho--; // Decrementa o tamanho para pegar o penúltimo elemento na próxima iteração
    };
        for(int i = 0; i < 20; i++){
            printf("Matriz valores: %2d\n", matriz[i]);
        }
};

void temperatura()
{
    int temperaturas[12], maior[2], menor[2], tamanho = sizeof(temperaturas) / sizeof(temperaturas[0]);
    char meses[12][10] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    maior[0] = 0;
    menor[0] = 500; // Assuming temperatures are between 0 and 100 initially.
    maior[1] = 0; // Posição do mês com a maior temperatura
    menor[1] = 0; // Posição do mês com a menor temperatura

    for (int i = 0; i < 12; i++)
    {
        printf("Digite a temperatura do mes %s:", meses[i]);
        temperaturas[i] = rand() % 45; // Temperaturas aleatórias entre 0 e 45 graus
        printf(" %d graus\n", temperaturas[i]);

        if (temperaturas[i] > maior[0]) // Se a temperatura atual for maior que a temperatura armazenada em maior[0], atualiza o valor
        {
            maior[0] = temperaturas[i]; // Atualiza a temperatura
            maior[1] = i; // Atualiza a posição do mês
        }

        if (temperaturas[i] < menor[0]) // Se a temperatura atual for menor que a temperatura armazenada em menor[0], atualiza o valor
        {
            menor[0] = temperaturas[i]; // Atualiza a temperatura
            menor[1] = i; // Atualiza a posição do mês
        }
    }

    printf("A maior temperatura foi: %d, na posicao: %d\n", maior[0], maior[1]);
    printf("A menor temperatura foi: %d, na posicao: %d\n", menor[0], menor[1]);

    printf("O mes com a maior temperatura eh: %s\n", meses[maior[1]]); // Imprime o mês com a maior temperatura utilizando a posição do mês na matriz meses
    printf("O mes com a menor temperatura eh: %s\n", meses[menor[1]]); // Imprime o mês com a menor temperatura, utilizando a posição do mês na matriz meses
}

void bubbleSort(int matriz[], int tamanho) { // Este bubble sort com while é mais eficiente que o bubble sort com for, pois ele para de executar quando a matriz estiver ordenada
    // Este metodo se chama bubble sort com otimização de troca ou parada
    int troca;
    do {
        troca = 0; // Inicializa a variável troca como 0
        for (int j = 0; j < tamanho - 1; j++) {
            if (matriz[j] > matriz[j + 1]) {
                int temp = matriz[j];
                matriz[j] = matriz[j + 1];
                matriz[j + 1] = temp;
                troca = 1; // Altera troca para 1 se uma troca foi feita
            }
        }
    } while (troca);
    for (int i = 0; i < tamanho; i++) {
        printf("%d: %d\n", i + 1, matriz[i]);
    }
}

void ordenacao() {
    int numeros[30], tamanho = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < tamanho; i++)
        numeros[i] = rand();

    bubbleSort(numeros, tamanho);
}


void somaValoresMatriz()
{
    int matriz[5][7], soma = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++){
            matriz[i][j] = rand();
            soma += matriz[i][j];
        };
    };

    printf("A soma deu: %d", soma);


};

void somaLinhaSomaColuna(){
    srand(time(NULL));
    int matriz[5][10], linha, coluna;

    linha = sizeof(matriz) / sizeof(matriz[0]);
    coluna = sizeof(matriz[0]) / sizeof(matriz[0][0]);

    int vetorLinhaSomada[linha];
    int vetorColunaSomada[coluna];

    for(int i = 0; i < coluna; i++){
        vetorColunaSomada[i] = 0;
    }
    for(int i = 0; i < linha; i++){
        vetorLinhaSomada[i] = 0;
    }

    printf("Linha: %d\n", linha);
    printf("Coluna: %d\n", coluna);
    
    for( int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            matriz[i][j] = rand() % 30;
        }
        printf("\n");
    }

// Inicializa os vetores de soma das linhas e colunas
    for(int i = 0; i < linha; i++) {
        vetorLinhaSomada[i] = 0;
        for(int j = 0; j < coluna; j++) {
            vetorLinhaSomada[i] += matriz[i][j]; // Soma os elementos da linha i
            vetorColunaSomada[j] += matriz[i][j]; // Soma os elementos da coluna j
        }
    }
    for( int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");


    for(int i = 0; i < coluna; i++){
        printf("Coluna somada: %d\n", vetorColunaSomada[i]);
    }

    printf("\n\n");

    for(int i = 0; i < linha; i++){
        printf("Linha somada: %d\n", vetorLinhaSomada[i]);
    }
}

int main()
{
    srand(time(NULL));
    // quadrado();
    //inverteValores();
    //temperatura();
    //ordenacao();
    //somaValoresMatriz();
    somaLinhaSomaColuna();



    return 0;
}