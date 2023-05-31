#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");
    int inteiro[2];
    int *endereco[2];
    float r;

    printf("Insira dois numeros inteiros.\n"); 

    for (int i = 0; i < 2; i++){
        scanf("%d", &inteiro[i]);
        endereco[i] = &inteiro[i];
    }

    printf("\nNo menu abaixo selecione uma operacao basica a ser realizada com os numeros inseridos.\n");
    printf("Insira \"+\" para soma.\n");
    printf("Insira \"-\" para subtracao.\n");
    printf("Insira \"*\" para multiplicacao.\n");
    printf("Insira \"/\" para divisao.\n\n");

    char c;
    scanf(" %c", &c);

    switch(c)
    {
        case '+':
            r = *endereco[0] + *endereco[1];
            printf("O resultado eh \"%.2f\".", r); break;
        case '-':
            r = *endereco[0] - *endereco[1];
            printf("O resultado eh \"%.2f\".", r); break;
        case '*':
            r = *endereco[0] * *endereco[1];
            printf("O resultado eh \"%.2f\".", r); break;
        case '/':
            r = *endereco[0] / *endereco[1];
            printf("O resultado eh \"%.2f\".", r); break;
        default:
            printf("Invalido!");

    }
}