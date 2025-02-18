#include <stdio.h>

void dobrar_valor(int num) {
    num * 2; //modifica apenas uma cópia do valor

    printf("Dentro da função (por valor), o valor dobrado é %d\n", num);

}

void dobra_valor_ref(int *num) {
    *num = *num * 2;

    printf("Dentro da função (por referencia), o valor é dobrado é %d\n", *num);
}


int main() {
    int numero = 10; 

    //passagem de valor 

    printf("Antes da função (por valor), o valor é %d \n", numero);

    printf("Antes da função (por referência), o valor é %d \n", numero);

    dobrar_valor_ref(&numero), //passamos o endereço da variável
    printf("Depois da função (por referência), o valor é %d\n", &numero);

    return (0);
}