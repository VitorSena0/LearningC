#include <stdio.h>
#include <stdlib.h>

void troca(int a, int b){

    a = b + a;
    b = a - b;
    a = a - b;

    printf("Resultado trocado:\n Valor de A: %d\n Valor de B: %d", a, b);
};

void formataTempo(int hora,int minuto,int segundo){
    char horas[3], minutos[3], segundos[3], tempo[8];

    if(hora < 10){
        sprintf(horas, "0%d", hora); // o sprintf serve para formatar uma string, ele funciona da seguinte forma: sprintf(nomeDaVariavel, "formato", variavel);

        }else{
            sprintf(horas, "%d", hora);
        };
    if(minuto < 10){
        sprintf(minutos, "0%d", minuto);
        }else{
            sprintf(minutos, "%d", minuto);
        
        };
    if(segundo < 10){
        sprintf(segundos, "0%d", segundo);
        }else{
            sprintf(segundos, "%d", segundo);
        };

        sprintf(tempo, "%s:%s:%s", horas, minutos, segundos); // o sprintf serve para formatar uma string, ele funciona da seguinte forma: sprintf(nomeDaVariavel, "formato", variavel);

    

    printf("Hora formatada: %s", tempo); 
};

void converteTempo(int segundos){
    // float horas = (float)segundos/(60*60); // Pega o total de segundos e divide por 60*60 para obter o total de horas
    // int horasInt = (int)((float)segundos/(60*60)); // Pega a parte inteira do total de horas
    // float minutos = (horas - horasInt)*60; // Pega a parte decimal do total de horas e multiplica por 60 para obter o total de minutos
    // int minutosInt = (int)minutos; // Pega a parte inteira do total de minutos
    // float segundosFloat = (minutos - minutosInt)*60; // Pega a parte decimal do total de minutos e multiplica por 60 para obter o total de segundos
    // int segundosInt = (int)segundosFloat; // Pega a parte inteira do total de segundos
    int horas, minutos, segundo, resto;
    horas = segundos / 3600;
    resto = segundos % 3600; // Pega o resto da hora, que é o total de segundos
    minutos = resto / 60; // Resto em segundos dividido por 60 para obter o total de minutos
    segundo = resto % 60; // Pega o resto dos minutos, que é o total de segundos

    formataTempo(horas, minutos, segundo);

};

int main() {
    //int a = 10, b = 20;
    //troca(a,b);
    converteTempo(34654);


    return 0;
};