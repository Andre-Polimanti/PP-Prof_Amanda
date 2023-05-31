#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array contendo 5 elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo
valores pares.*/

void main()
{
    int array[5], r, s = 0;
    
    system("cls");
    printf("Insira 5 valores e descubra o endereco daqueles que sao pares.\n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 5; i++){
        r = (*(array + i) % 2);
        if(!r){
            s+=1;
        }
    }
    if(s != 0){
        printf("As seguintes posicoes contem valores pares:\n");
        for (int i = 0; i < 5; i++){
            r = (*(array + i) % 2);
            if(!r){
                s+=1;
                printf("%p\n", (array + i));
            }
        }
    }else{
        printf("Nao foi inserido nenhum valor par."); 
    }
}