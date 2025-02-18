#include <stdio.h>

void troca(int x, int y) {
    int aux;
    x = y;
    y = aux; 
}

int main(){
    int v1 = 5, v2 = 10;
    printf("Antes da troca: v1= %d e v2= %d\n ", v1, v2);
    troca(v1, v2);//Copia o valor de v1 e v2, porém não altera 
    printf("Depois da troca: v1= %d e v2= %d  \n",v1, v2);
    exit (0);
}
