/*
Faça um programa que leia um número inteiro positivo N e calcule a soma
dos N primeiros números naturais.
*/
#include <stdio.h>

int main(){
    int i, num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num < 0){
        printf("Numero digitado é negativo, entre com um numero positivo: ");
        scanf("%d", &num);
    }

    for(i = 0; i <= num; i++){
        soma += i;    
    }
    printf("%d\n", soma);

    return 0;
}