#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que dado um array e um valor do mesmo tipo do
array, preencha os elementos de array com esse valor. Não utilize índices
para percorrer o array, apenas aritmética de ponteiros.*/

void main()
{
    system("cls");
    int array_int[30], n;

    printf("Insira uma valor inteiro para preencher um array.\n");
    scanf("%d", &n);

    printf("O array eh:\n");

    for (int i = 0; i < 30; i++){
        *(array_int+i) = n;
        printf("%d", *(array_int+i));
    }
}