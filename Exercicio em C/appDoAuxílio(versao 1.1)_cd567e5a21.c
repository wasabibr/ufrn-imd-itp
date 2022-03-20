#include <stdio.h>

int verIdade(int i){
    if(i >= 18){
        return 1;
    } else {
        return 0;
    }
}

int verRenda(float r){
    if(r <= 3135){
        return 1;
    } else {
        return 0;
    }
}

int verRendaPorPessoa(float r, int p){
    if(r / p <= 552.50){
        return 1;
    } else {
        return 0;
    }
}

int main(void){
    int idade, pessoa;
    float renda;

    scanf("%d %f %d", &idade, &renda, &pessoa);

    if(verIdade(idade) == 1 && (verRenda(renda) == 1 || verRendaPorPessoa(renda, pessoa) == 1)){
            printf("apto");
    } else {
            printf("nao");
    }

    return 0;
}
