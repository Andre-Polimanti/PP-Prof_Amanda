#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3
colunas. Utilizando aritmética de ponteiro, imprima o endereço de cada
posição dessa matriz.*/

void main()
{
    system("cls");
    float a[3][3];

    printf("Uma matriz 3x3 contida nesse programa tem seus elementos contidos nas seguintes posicoes:\n");
    
    for (int i = 0; i < 9; i++){
        printf("%p\n", (a+i));
    }
}