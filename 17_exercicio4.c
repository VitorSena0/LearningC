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
    int matriz[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, matriz2[20], tamanho = sizeof(matriz) / sizeof(matriz[0]);

    for (int i = 0; i < 20; i++)
    {
        matriz2[i] = matriz[tamanho - 1];
        tamanho--;
        printf("Matriz valores: %2d\n", matriz2[i]);
    };
};

void temperatura()
{
    int matriz[12], maior[2], menor[2], tamanho = sizeof(matriz) / sizeof(matriz[0]);
    char meses[12][10] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    maior[0] = 0;
    menor[0] = 500; // Assuming temperatures are between 0 and 100 initially.
    maior[1] = 0;
    menor[1] = 0;

    for (int i = 0; i < 12; i++)
    {
        printf("Digite a temperatura do mes %s:", meses[i]);
        matriz[i] = rand() % 45;
        printf(" %d graus\n", matriz[i]);

        if (matriz[i] > maior[0])
        {
            maior[0] = matriz[i];
            maior[1] = i;
        }

        if (matriz[i] < menor[0])
        {
            menor[0] = matriz[i];
            menor[1] = i;
        }
    }

    printf("A maior temperatura foi: %d, na posicao: %d\n", maior[0], maior[1]);
    printf("A menor temperatura foi: %d, na posicao: %d\n", menor[0], menor[1]);

    printf("O mes com a maior temperatura eh: %s\n", meses[maior[1]]);
    printf("O mes com a menor temperatura eh: %s\n", meses[menor[1]]);
}

void bubbleSort(int matriz[], int tamanho) // Algoritmo de ordenação Bubble Sort, ordena os elementos da matriz, complexidade O(n^2)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - i - 1; j++) // tamanho - i - 1 para não comparar elementos que já estão ordenados, pois o maior elemento já está na última posição
        {
            if (matriz[j] > matriz[j + 1]) // Se o elemento atual for maior que o próximo elemento, troca
            {
                int temp; // Variável temporária para armazenar o valor do elemento atual
                temp = matriz[j];
                matriz[j] = matriz[j + 1];
                matriz[j + 1] = temp;
            };
        };
    };
    for (int i = 0; i < tamanho; i++)
    { // Imprime a matriz ordenada
        printf("%d: %d\n", i + 1, matriz[i]);
    };
};

void ordenacao()
{
    int numeros[10000], tamanho = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < tamanho; i++)
        numeros[i] = rand();

    bubbleSort(numeros, tamanho); // Ordena os elementos da matriz
};

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
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, vetorColunaSomada[3], vetorLinhaSomada[3];
    for(int i = 0; i < 3; i++){
        vetorLinhaSomada[i] = 0;
        for(int j = 0; j < 3; j++){
            if(i == 0){
                vetorColunaSomada[j] = matriz[i][j];
            }else{
                vetorColunaSomada[j] += matriz[i][j];
            }
                vetorLinhaSomada[i] += matriz[i][j];


        };
    };
    for(int i = 0; i < 3; i++){
        printf("Coluna somada: %d\n", vetorColunaSomada[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("Linha somada: %d\n", vetorLinhaSomada[i]);
    }
    /*
    1 2 3
    4 5 6
    7 8 9
    */
}

int main()
{
    srand(time(NULL));
    // quadrado();
    // inverteValores();
    // temperatura();
    // ordenacao();
    //somaValoresMatriz();
    somaLinhaSomaColuna();



    return 0;
}