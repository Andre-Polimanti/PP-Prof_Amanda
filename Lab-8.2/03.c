#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
imprima o dobro de cada valor lido.*/

void main(){
    system("cls");

    int array[5];

    printf("Insira 5 elementos inteiros de um array para receber seus dobros.\n");

    for (int i = 0; i < 5; i++){
        printf("%d elemento: ", (i+1));
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("\nDobro do %d elemento : %d", (i+1), (*(array+i)*2));
    }
}