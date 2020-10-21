/*
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/
#include <stdio.h>

int main()
{
    int i, soma = 0;

    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            soma = soma + i;
        }
    }
    printf("O resultado da soma dos numeros pares é: %d\n", soma);
    return 0;
}