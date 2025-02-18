#include <stdio.h>
#include <ctype.h>

int main() {
    int i = 0;
    char texto [] = "Programacao123";
    //Percorrendo cada caracter
    while (texto [i]) {
        //Verifica se é uma letra
        if (isalpha(texto[i])){
            printf("%c - uma letra.\n", texto[i]);
            //Transformando em maiúscula para minúscula
            if(islower(texto[i])){
            texto[i] = toupper(texto[i]);
            printf("Convertido para maiusculo: %c\n", texto[i]);
            }
        }
        //Verificando se é um número
        else if (isdigit(texto[i])){
            printf("%c - um número.\n", texto[i]);
        }
        i++;
    }
    //Transformando texto
    printf("Texto Transformado %s\n ", texto);

    return 0;
}