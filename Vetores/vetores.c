#include <stdio.h>

int soma = 0;
int calcular_soma(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++){
        soma += vetor[i]; //
    }
return soma;
}


int main() {
    int lista_compras[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(lista_compras) / sizeof(lista_compras[0]);


    int total;
    total = calcular_soma(lista_compras, tamanho);


    printf("O total da lista de compras: %d\n", total);

    return 0;
}