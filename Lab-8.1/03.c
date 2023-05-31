#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro[2];
    int *endereco[2], *maior_endereco;

    maior_endereco = 0;

    for(int i = 0; i < 2; i++){
        inteiro[i] = i + 3;
        endereco[i] = &inteiro[i];
        printf("O %d endereco eh %p.\n", i + 1, endereco[i]);
    }

    for(int i = 0; i < 2; i++){
        if(endereco[i] > maior_endereco){
            maior_endereco = endereco[i];
        }
    }

    printf("O conteudo do maior endereco eh %p.", maior_endereco);
}