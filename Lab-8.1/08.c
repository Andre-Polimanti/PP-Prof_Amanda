#include <stdio.h>
#include <stdlib.h>

void main(){
    system("cls");
    int vet[6];
    int *endereco[6];

    printf("Insira seis valores inteiros de um vetor para recebe-los e seus enderecos.\n");

    for (int i = 0; i < 6; i++){
        scanf("%d", &vet[i]);
        endereco[i] = &vet[i];
    }

    printf("Os valores do vetor e seus enderecos sao:\n");

    for (int i = 0; i < 6; i++){
        printf("Valor: %d\n", *endereco[i]);
        printf("Endereco: %d\n", endereco[i]);
    }
}