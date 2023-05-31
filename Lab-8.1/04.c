#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro[2];
    int *endereco[2], *maior_endereco;

    maior_endereco = 0;

    printf("Insira dois numeros inteiros.\n");

    for(int i = 0; i < 2; i++){
        scanf(" %d", &inteiro[i]);
        endereco[i] = &inteiro[i];
    }

    for(int i = 0; i < 2; i++){
        if(endereco[i] > maior_endereco){
            maior_endereco = endereco[i];
        }
    }

    printf("O conteudo do maior endereco eh %d.", *maior_endereco);
}