/*
Escreva um algoritimo que leia certa quantidade de números e imprima o maior deles e quantas
vezes o maior número foi lido. A quantidade de números a serem lidos deve ser forcenida pelo usuário.
*/
#include <stdio.h>

int main(){
    int i, quant, maior = 0, num, cont = 0;

    printf("Informe a quantidade de numeros a serem lidos: ");
    scanf("%d", &quant);

    for(i = 1; i <= quant; i++){
        printf("informe o %d° numero: ", i);
        scanf("%d", &num);
            if(num > maior){
                maior = num;
                cont++;
            }
    }
    printf("O maior numero entre os digitados é: %d\n", maior);
    printf("A quantidade de vezes que o maior numero foi lido: %d\n", cont);
    return 0;
}