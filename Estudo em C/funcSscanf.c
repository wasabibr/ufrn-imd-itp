#include <stdio.h>

int main(){
    char texto[100];
    char nome[50];
    int idade;
    double altura;

    fgets(texto, 100, stdin);

    sscanf(texto, "%s - %d - %lf", nome, &idade, &altura);

    printf("Nome: %s\nIdade: %d\nAltura: %.2lf", nome, idade, altura);

    return 0;
}
