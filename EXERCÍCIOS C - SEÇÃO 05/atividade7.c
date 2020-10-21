/*
Faça um programa que leia 10 inteiros positivos, ignorando não positivos
e imprima sua media.
*/
#include <stdio.h>

int main() {
    int num, i, soma = 0, media = 0;

    for(i = 1; i <= 10; i++){
        printf("Informe o %d° número: ", i);
        scanf("%d", &num); 
        while(num <= 0){
            printf("Numero negativo, redigite o %d° com um numero positivo: ", i);
            scanf("%d", &num); 
        }
        soma += num;
        media = soma / 10; 
    }
    printf("A media dos numeros positivos digitados é: %d\n ", media);

return 0;
}