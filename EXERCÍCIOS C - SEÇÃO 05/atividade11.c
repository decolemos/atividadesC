/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.
*/
#include <stdio.h>

int main(){
    int i, num;

    printf("Informe um numero positivo: ");
    scanf("%d", &num);
    while(num <= 0){
        printf("Numero invalido, redigite com um numero positivo: ");
        scanf("%d", &num);
    }
    for(i = 0; i <= num; i++){
        printf("%d\n", i);
    }

    return 0;
}