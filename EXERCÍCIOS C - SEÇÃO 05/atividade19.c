/*
Escreva um algoritimo que leia um número inteiro entre 100 e 999 e imprima na saída
cada um dos algarismos que compõem o número.
*/
#include <stdio.h>

int main()
{

    int n, centena, dezena, unidade;

    printf("Informe um número: ");

    scanf("%d", &n);

    while ((n < 100) || (n > 999))
    {

        printf("Erro. Precisa estar entre 100 e 999. Reinforme o número: ");

        scanf("%d", &n);
    }

    centena = n / 100;
    dezena = (n % 100) / 10;
    unidade = (n % 100) % 10;

    printf("Os algorimos que compõem o numero digitado é: %d / %d / %d\n", centena, dezena, unidade);
return 0;
}


