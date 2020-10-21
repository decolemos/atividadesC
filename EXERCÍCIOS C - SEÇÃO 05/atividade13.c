/*
Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem crescente.
*/
#include <stdio.h>

int main()
{
    int i, num;

    printf("Insira um numero inteiro PAR: ");
    scanf("%d", &num);
    while(num %2 != 0){
        printf("Numero digitado é IMPAR, entre com um numero PAR: ");
        scanf("%d", &num);
    }

    for(i = 0; i <= num; i++){
        if(i %2 == 0){
            printf("%d\n", i);
        }
    }

        return 0;
}