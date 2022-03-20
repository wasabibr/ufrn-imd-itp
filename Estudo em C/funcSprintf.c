#include <stdio.h>

int main(){
    char texto[100];
    char nome[50] = "André";
    int idade = 37;
    double altura = 1.70;

    sprintf(texto, "%s - %d - %.2lf", nome, idade, altura);

    printf("%s", texto);

    return 0;
}
