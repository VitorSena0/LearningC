#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int *num) // num é um ponteiro para um inteiro
{
    int fact = 1;
    for (int i = 1; i <= *num; i++)
    {
        fact *= i;
    }
    *num = fact; // num é um ponteiro, então ele aponta para o endereço de memória de num que está na função verifyNumber
}

int verifyNumber(int num)
{
    int numberPartial = num, numberFat, somatorio = 0;

    while (numberPartial != 0)
    {
        numberFat = numberPartial % 10;
        factorial(&numberFat);
        somatorio += numberFat;
        numberPartial /= 10 ;
    }
    printf("Somatorio: %d\n", somatorio);
    if(somatorio == num){
        return 1;
    }
    return 0;
}

int main()
{
    int num, isStrongNum;
    printf("Digit a number: ");
    scanf("%d", &num);

    isStrongNum = verifyNumber(num);
    isStrongNum? printf("The number is a strong number") : printf("The number is not a strong number");
    return 0;
}