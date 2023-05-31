#include <stdio.h>
#include <stdlib.h>

int main()
{
        int inteiro = 1;
        float real = 8.5;
        char caractere = 'C';

        int *ponteiro_inteiro;
        ponteiro_inteiro = &inteiro;

        float *ponteiro_real;
        ponteiro_real = &real;

        char *ponteiro_caractere;
        ponteiro_caractere = &caractere;

        printf("Os valores das varaiveis inteiro, real e caractere, antes da modificacao sao, respectivamente, os seguintes:\n%d\n%.2f\n%c\n\n", inteiro, real, caractere);


        *ponteiro_inteiro = 1004;

        *ponteiro_real = 1008.5;

        *ponteiro_caractere = 'B';

        printf("Os valores das varaiveis inteiro, real e caractere, apos a modificacao sao, respectivamente, os seguintes:\n%d\n%.2f\n%c", inteiro, real, caractere);
}