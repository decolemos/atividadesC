/*
Faça um programa que peça ao usuário para digitar 10 valores e some-os.
*/
#include <stdio.h>

int main(){
    int i, num, soma = 0;

    for(i = 1; i <=4; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("A soma dos numeros digitados é: %d\n", soma);
}