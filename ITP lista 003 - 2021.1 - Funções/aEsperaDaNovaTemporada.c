#include <stdio.h>

int contDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){
    int totalDias = 0, vetMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30 ,31, 30, 31}, somaDias1 = 0, somaDias2 = 0, contagemDe = 0, contagemPara = 0;


    if(ano1 == ano2){
        if(mes1 == 1){
            somaDias1 += dia1;
        } else {
            if(mes1 > 1 && mes1 <= 12){
                for(int i = 0; i < mes1 - 1; i++){
                    somaDias1 += vetMes[i];
                }
                somaDias1 += dia1;
            }
        }
        contagemDe = somaDias1;

        if(mes2 == 1){
            somaDias2 += dia2;
        } else {
            if(mes2 > 1 && mes2 <= 12){
                for(int i = 0; i < mes2 - 1; i++){
                    somaDias2 += vetMes[i];
                }
                somaDias2 += dia2;
            }
        }
        contagemPara = somaDias2;

        totalDias = contagemPara - contagemDe;
    } else {

        if(mes1 == 1){
            somaDias1 += dia1;
        } else {
            if(mes1 > 1 && mes1 <= 12){
                for(int i = 0; i < mes1 - 1; i++){
                    somaDias1 += vetMes[i];
                }
                somaDias1 += dia1;
            }
        }
        contagemDe = 365 - somaDias1;

        if(mes2 == 1){
            somaDias2 += dia2;
        } else {
            if(mes2 > 1 && mes2 <= 12){
                for(int i = 0; i < mes2 - 1; i++){
                    somaDias2 += vetMes[i];
                }
                somaDias2 += dia2;
            }
        }
        contagemPara = somaDias2;

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
