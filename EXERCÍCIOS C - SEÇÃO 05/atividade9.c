/*
Faça um programa que leia um número inteiro N e depois imprima os N
primeiros números naturais impares.
*/
#include <stdio.h>

int main(){
    int i, num;

    printf("Insira um numero natural: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        if(i %2 != 0)
            printf("%d\n", i);
    }

    return 0;
}