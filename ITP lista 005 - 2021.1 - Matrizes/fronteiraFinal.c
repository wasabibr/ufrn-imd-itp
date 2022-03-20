#include <stdio.h>

void scannerEnterprise(int aG, int hO, int dE, int vE, int rN, int total);

int main(void){
    int N, M, i, j, contAg = 0, contHo = 0, contDe = 0, contVe = 0, contRN = 0;

    scanf("%d %d", &N, &M);

    char matMapa[10][10];

    for(i = 0; i <= N; i++){
        for(j = 0; j < M; j++){
            scanf("%c", &matMapa[i][j]);
            if(matMapa[i][j] == 126){
                contAg++;
            }
            if(matMapa[i][j] == 88){
                contHo++;
            }
            if(matMapa[i][j] == 94){
                contDe++;
            }
            if(matMapa[i][j] == 42){
                contVe++;
            }
            if(matMapa[i][j] == 46){
                contRN++;
            }
        }
    }

    scannerEnterprise(contAg, contHo, contDe, contVe, contRN, N * M);

    return 0;
}


void scannerEnterprise(int aG, int hO, int dE, int vE, int rN, int total){
    if(hO > 0){
        printf("Planeta Hostil");
    } else {
        if((float)aG >= (float)total*0.5 && (float)vE >= (float)total*0.2){
            printf("Planeta Classe M");
        } else {
            if((float)aG >= (float)total*0.8){
                printf("Planeta Aquático");
            }
            if((float)dE >= (float)total*0.6){
                printf("Planeta Desértico");
            }
            if((float)vE >= (float)total*0.65){
                printf("Planeta Selvagem");
            }
            if((float)aG < (float)total*0.8 && (float)vE < (float)total*0.65 && (float)dE < (float)total*0.6){
                printf("Planeta Inóspito");
            }
        }
    }
}

