#include <stdio.h>

int contagem(int d, int m){
    int vetMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30 ,31, 30, 31}, soma = 0;

    if(m == 1){
        soma += d;
    } else {
        if(m > 1 && m <= 12){
            for(int i = 0; i < m - 1; i++){
                soma += vetMes[i];
            }
            soma += d;
        }
    }

    return soma;
}

int contDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){
    int totalDias = 0, contagemDe = 0, contagemPara = 0;


    if(ano1 == ano2){
        contagemDe = contagem(dia1, mes1);
        contagemPara = contagem(dia2, mes2);

        totalDias = contagemPara - contagemDe;
    } else {
        contagemDe = 365 -  contagem(dia1, mes1);
        contagemPara = contagem(dia2, mes2);

        totalDias = contagemPara + contagemDe;
    }

    printf("%d", totalDias);

    return 0;
}


int main(void){
    int d1, m1, a1, d2, m2, a2;

    scanf("%d %d %d %d %d %d", &d1, &m1, &a1, &d2, &m2, &a2);

    contDias(d1, m1, a1, d2, m2, a2);

    return 0;
}
