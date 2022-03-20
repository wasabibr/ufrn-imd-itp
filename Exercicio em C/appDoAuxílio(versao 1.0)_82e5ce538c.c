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

int main(void){
    int idade;
    float renda;

    scanf("%d %f", &idade, &renda);

    if(verIdade(idade) == 1 && verRenda(renda) == 1){
        printf("apto");
    } else {
        printf("nao");
    }

    return 0;
}
