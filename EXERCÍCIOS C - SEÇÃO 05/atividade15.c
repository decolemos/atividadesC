/*
Faça um programa que leia um número inteiro positivo IMPAR N e imprima todos os números
IMPARES do 1 até N em ordem crescente.
*/
#include <stdio.h>

int main()
{
    int i, num;

    printf("Insira um numero inteiro IMPAR: ");
    scanf("%d", &num);
    while(num %2 == 0){
        printf("Numero digitado é PAR, entre com um numero IMPAR: ");
        scanf("%d", &num);
    }

    for(i = 1; i <= num; i++){
        if(i %2 != 0){
            printf("%d\n", i);
        }
    }

        return 0;
}