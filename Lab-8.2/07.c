#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que receba um array de inteiros com 10 elementos
digitados pelo usuário e encontre o menor (min) e o maior (max) elemento
desse array. Utilize ponteiros tanto para acessar o array quanto para acessar
as variáveis min e max, ou seja, são necessários pelo menos 3 ponteiros.*/

void main()
{
    system("cls");
    int array[10];
    int *p_maior, *p_menor, *p;

    p = array;

    printf("Insira 10 valores para receber o maior e o menor,\n");

    for (int i = 0; i < 10; i++){
        printf("%d valor: ", (i+1));
        scanf("%d", (p+i));
    }

    int maior = 0;
    p_maior = &maior;

    for (int i = 0; i < 10; i++){
        if(*(p+i) > maior){
            maior = *(p+i);
            p_maior = &maior;
        }
    }
    printf("\nO maior eh \"%d\".", *(p_maior));

    int menor = array[0];
    p_menor = &menor;
    
    for (int i = 0; i < 10; i++){
        if(*(p+i) < menor){
            menor = *(p+i);
            p_menor = &menor;
        }
    }
    printf("\nO menor eh \"%d\".", *(p_menor));
}