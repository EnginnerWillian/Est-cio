#include <stdio.h>

int soma(int x, int y); //assinatura da função

int main(void) {
    int num1, num2, num3;
    printf("Digite o primerio número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    num3 = soma(num1, num2);// chamada de função
    printf("A Soma de %d + %d =  %d\n", num1, num2, num3);
    return(0);
}

int soma(int x,  int y) {
    return(x+y);
}