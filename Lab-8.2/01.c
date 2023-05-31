#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array de float contendo 10 elementos.
Utilizando aritmética de ponteiro, imprima o endereço de cada posição
desse array.*/

void main()
{
    float array[10] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};
    system("cls");

    for (int i = 0; i < 10; i++){
        printf("Posicao do %d elemento do array contido no programa: %p\n", (i+1), (array+i));
    }
}