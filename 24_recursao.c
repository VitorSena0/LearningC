#include <stdio.h>



void recursive(int numbers[], int size){
        int isEven = numbers[size - 1] % 2;
        if(isEven == 0){
            numbers[size - 1] -= 1;
        }else{
            numbers[size - 1] += 1;
        }
    if(size == 0){
        return;
    }
        recursive(numbers, size - 1);
}

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    recursive(numbers, size);
    for(int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }

    return 0;
}