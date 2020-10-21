/*
Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor lido
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i, maior, menor, aux;

    for(i = 1; i <= 4; i++){
        printf("Digite o %d° número: \n", i);
        scanf("%d", &num);
       if(num > maior){
        maior = num;
       }        
       if(num < menor){
        menor = num;
       }         
    }
    printf("%d / %d\n", maior, menor);

    return 0;
}