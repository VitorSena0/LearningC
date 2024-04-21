#include <stdio.h>
#include <stdlib.h> 

int main(){
    int count = 10;
    // for(int i = 0; i <= count; i++){ // Crescente
    //     printf("Contador: %d\n", i);
    // };
    // for(int i = 0; i <= count; count--){ // Decrescente
    //     printf("Contador: %d\n", count);
    // };
    // for(int i = 0; i <= count; i += 3){
    //     printf("Contador: %d\n", i);
    // }
     for(int i = 0; i <= count; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("Contador impares: %d\n", i);
     }
    

    return 0;
}
