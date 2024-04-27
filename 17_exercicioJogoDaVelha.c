#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limparBuffer(){
    char c;
    while (c = getchar() != '\n' && c != EOF);
}


int verificarVitoria(char jogoDaVelha[3][3], char jogador){
    int vitoriaX = 1, vitoriaO = 2;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(jogoDaVelha[i][0] == jogador && jogoDaVelha[i][1] == jogador && jogoDaVelha[i][2] == jogador){
                return jogador == 'X' ? vitoriaX : vitoriaO;
            }
            if(jogoDaVelha[0][j] == jogador && jogoDaVelha[1][j] == jogador && jogoDaVelha[2][j] == jogador){
                return jogador == 'X' ? vitoriaX : vitoriaO;
            }
        }
    }
    if(jogoDaVelha[0][0] == jogador && jogoDaVelha[1][1] == jogador && jogoDaVelha[2][2] == jogador){
        return jogador == 'X' ? vitoriaX : vitoriaO;
    }
    if(jogoDaVelha[0][2] == jogador && jogoDaVelha[1][1] == jogador && jogoDaVelha[2][0] == jogador){
        return jogador == 'X' ? vitoriaX : vitoriaO;
    }
}

int realizarJogada(char jogoDaVelha[3][3], int jogada, char jogador){
    int verificaSeEhNumero = scanf("%d", &jogada); // Além de ler um inteiro vai verificar se o valor digitado é um número
    if (jogada > 9 || jogada < 1 || verificaSeEhNumero == 0){
        limparBuffer(); // Limpa o buffer do teclado, quando a pessoa digita um caractere ele fica em loop e nao limpa o \n
        printf("\nJogada invalida, jogue novamente!!\n");
        printf("\nVez do jogador %c, Digite: ", jogador);

        return 0;
    }
    int linha = (jogada - 1) / 3;  // Este calculo serve para saber em qual linha a jogada vai ser feita
    int coluna = (jogada - 1) % 3; // Este calculo serve para saber em qual coluna a jogada vai ser feita
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (jogoDaVelha[linha][coluna] != '#'){
                printf("\nPosicao ja escolhida, jogue novamente!!\n");
                printf("\nVez do jogador %c, Digite: ", jogador);
                return 0;
            }
        }
    }
    if (jogador == 'X'){
        jogoDaVelha[linha][coluna] = 'X';
    }
    else{
        jogoDaVelha[linha][coluna] = 'O';
    }
    int estado = verificarVitoria(jogoDaVelha, jogador);
    return estado;

}

void imprimiJogo(char jogoDaVelha[3][3]){
    printf("\n\n  1 2 3");
    for (int i = 0; i < 3; i++){
        printf("\n%d", i + 1);
        for (int j = 0; j < 3; j++){
            printf("%2c", jogoDaVelha[i][j]);
        }
    }
}

int reiniciarJogo(char jogoDaVelha[3][3]){
   char jogarNovamente;
    printf("\n\n----> Deseja jogar novamente? [s|n]: ");
    scanf(" %c", &jogarNovamente);  // Adicionei um espaço antes do %c para consumir o \n deixado no buffer
    limparBuffer();
    if (jogarNovamente == 's') {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                jogoDaVelha[i][j] = '#';
            }
        }
        return 1;
    } else {
        return 0;
    }
}

int main(){
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    char jogoDaVelha[3][3] = {'#', '#', '#', '#', '#', '#', '#', '#', '#'};
    int verificaVezJogador /*Se for 1 é o 'X' se for 0 é 'O'*/, numeroAleatorio = rand() % 100, jogadasTotais = 0, continuarJogo;
    verificaVezJogador = numeroAleatorio < 50 ? 1 : 0; // Se o número gerado for menor que 0.5, o jogador 'X' começa, senão o jogador 'O' começa


    do{
        printf("-----------[Jogo da velha]-------------\n");

        printf("Selecione uma posicao de 1 ate 9 para jogar\n");
        imprimiJogo(jogoDaVelha);

        int jogada_X, jogada_O, verificaJogada;
        char jogadorX = 'X', jogadorO = 'O';

        if (verificaVezJogador){
            verificaVezJogador = 0;
            printf("\n\nVez do jogador %c, Digite: ", jogadorX);
            verificaJogada = realizarJogada(jogoDaVelha, jogada_X, jogadorX);
            while (!verificaJogada){
                verificaJogada = realizarJogada(jogoDaVelha, jogada_X, jogadorX);
            };
        }
        else{
            verificaVezJogador = 1;
            printf("\n\nVez do jogador %c, Digite: ", jogadorO);
            verificaJogada = realizarJogada(jogoDaVelha, jogada_O, jogadorO);
            while (!verificaJogada){
                verificaJogada = realizarJogada(jogoDaVelha, jogada_O, jogadorO);
            };
        };
        jogadasTotais++;

        if(verificaJogada == 1){
            imprimiJogo(jogoDaVelha);
            printf("\n\nJogador X venceu!!\n");
            continuarJogo = reiniciarJogo(jogoDaVelha);
                if(continuarJogo){
                    jogadasTotais = 0;
                }else{
                    break;
                }
            }

        if(verificaJogada == 2){
            imprimiJogo(jogoDaVelha);
            printf("\n\nJogador O venceu!!\n");
            continuarJogo = reiniciarJogo(jogoDaVelha);
                if(continuarJogo){
                    jogadasTotais = 0;
                }else{
                    break;
                }
        }
        if(jogadasTotais == 9){
            imprimiJogo(jogoDaVelha);
            printf("\n\nEmpate!!\n");
            continuarJogo = reiniciarJogo(jogoDaVelha);
                if(continuarJogo){
                    jogadasTotais = 0;
                }else{
                    break;
                }
        }
        

        printf("\n\n========================================\n\n");
    } while (1);
    return 0;
}