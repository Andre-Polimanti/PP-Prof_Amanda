#include <stdio.h>
#include <stdlib.h>

/*Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um
programa que leia a variável ‘A’ e calcule e exiba o dobro, o triplo e o
quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B
deve ser usada para calcular o dobro, C o triplo e D o quádruplo.*/

void main()
{
    int A, *B, **C, ***D;

    printf("Insira um valor inteiro A para receber seu dobro, triplo e quadruplo. Estes sendo representados por B, C e D, respectivamente.\n");
    scanf("%d", &A);

    B = &A;

    *B = (*B) * 2;
    printf("O dobro eh \"%d\".\n", *B);

    C = &B;

    **C = ((*B) * 3) / 2;
    printf("O triplo eh \"%d\".\n", **C);

    D = &C;

    ***D = (((**C) * 8) / 6);
    printf("O Quadruplo eh \"%d\".", ***D);    
}