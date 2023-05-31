#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que receba duas strings digitadas pelo usuário e
verifique se a segunda string ocorre dentro da primeira. Use aritmética de
ponteiros para acessar os caracteres das strings.*/

void main()
{
    system("cls");
    char str1[30], str2[30];
    char *p1, *p2;

    printf("Insira duas strings para saber se uma eh substring da outra.\n");

    printf("String_1: ");
    setbuf(stdin, NULL);
    fgets(str1, 20, stdin);

    printf("String_2: ");
    setbuf(stdin, NULL);
    fgets(str2, 20, stdin);

    p1 = str1;
    p2 = str2;

    int x;

    for (int i = 0; *(p1+i) != '\n'; i++){
        if (*(p1+i) == *p2){
            x = i;
            break;
        }
    }
    
    
    int check_1 = 1;

    for (int i = x, j = 0; (i < strlen(str2)-1+x); i++, j++){
        if((*(p1+i)) != (*(p2+j))){
        check_1 = 0;
        }
    }
    if(check_1 == 1){
        printf("\nA string_2 eh substring da string_1.");
    }else{
        printf("\nA string_2 nao eh substring da string_1.");
    }

    
    
    for (int i = 0; *(p2+i) != '\n'; i++){
        if (*(p2+i) == *p1){
            x = i;
            break;
        }
    }


    int check_2 = 1;

    for (int i = x, j = 0; (i < strlen(str1)-1+x); i++, j++){
        if((*(p2+i)) != (*(p1+j))){
        check_2 = 0;
        }
    }
    if(check_2 == 1){
        printf("\nA string_1 eh substring da string_2.");
    }else{
        printf("\nA string_1 nao eh substring da string_2.");
    }

    if((check_1 == 1) && (check_2 == 1)){
        printf("\n\nAs strings sao iguais.");
    }
}