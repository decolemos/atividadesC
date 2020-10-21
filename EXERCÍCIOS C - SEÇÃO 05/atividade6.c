/*
Faça um programa que leia 10 inteiros e imprima sua média.
*/
#include <stdio.h>

int main(){
    int i = 1, num, soma = 0, media;

    while(i <= 10){
        printf("Digite um numero: ");
        scanf("%d", &num);
        i++;
        soma = soma + num;
        media = i / 10;
    }
    printf("Soma dos números: %d / Media dos números: %d\n", soma, media);
}