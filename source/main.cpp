#include <stdio.h>
#include <stdlib.h>
#include "../include/func.hpp"


int main () {

    int* inputPointer = ((int *)malloc(sizeof(int)));
    int inputInteger;
    

    printf("Digite o valor do seu ponteiro para inteiro: ");
    scanf("%d", inputPointer);
    printf("Digite o valor do seu inteiro: ");
    scanf("%d", &inputInteger);

    sumTwo(&inputInteger);
    sumTwo(inputPointer);

    *inputPointer = sumThree(*inputPointer);
    inputInteger = sumThree(inputInteger);

    sumOne(*inputPointer);
    sumOne(inputInteger);

    printf("\n# Input + 6 #\n\n");
    printf("Pointer: %d\nInteger: %d\n\n", *inputPointer, inputInteger);
    free(inputPointer);

    return 0;
}