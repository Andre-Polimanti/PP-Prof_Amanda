#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");
    int inteiro[3];
    int *endereco[3];
    int temp;

    printf("Isira tres numeros inteiros para recebe-los em ordem crescente, assim como seus enderecos.\n");

    for (int i = 0; i < 3; i++){
        scanf("%d", &inteiro[i]);
        endereco[i] = &inteiro[i];
    }
    
    ord(endereco[0], endereco[1], endereco[2]);
    
    for (int i = 0; i < 3; i++){
        printf("Numero: %d\n", *endereco[i]);
        printf("Endereco: %d\n", endereco[i]);
    }
}
    void ord(int *n1, int *n2, int *n3) {
    int x;
    
    if (*n1 > *n2) {
        x = *n1;
        *n1 = *n2;
        *n2 = x;
    }
    
    if (*n2 > *n3) {
        x = *n2;
        *n2 = *n3;
        *n3 = x;
    }
    
    if (*n1 > *n2) {
        x = *n1;
        *n1 = *n2;
        *n2 = x;
    }
}