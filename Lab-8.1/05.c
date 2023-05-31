#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro[2], soma = 0;
    int *endereco[2];

    printf("Insira dois numeros inteiros.\n");

    for(int i = 0; i < 2; i++){
        scanf(" %d", &inteiro[i]);

        endereco[i] = &inteiro[i];

        soma += *endereco[i] * 2;
    }

    printf("A soma eh %d.", soma);
}