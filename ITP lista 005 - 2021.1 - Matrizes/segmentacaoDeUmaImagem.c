#include <stdio.h>

int main(void){
    int M, N, L, matImg[20][20], modMatMImg[20][20], i, j;

    scanf("%d %d %d", &M, &N, &L);

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            scanf("%d", &matImg[i][j]);
        }
    }

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            if(matImg[i][j] < L){
                modMatMImg[i][j] = 0;
            } else {
                modMatMImg[i][j] = 1;
            }
        }
    }

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("%d ", modMatMImg[i][j]);
        }
        printf("\n");
    }

    return 0;
}
