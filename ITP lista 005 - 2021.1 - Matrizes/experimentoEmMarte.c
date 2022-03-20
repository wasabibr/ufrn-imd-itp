#include <stdio.h>

int main(void){
    int N, M, S, i, j;

    scanf("%d %d %d", &N, &M, &S);

    int matTer[N][M];

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++{
            scanf("%d", &matTer[i][j]);
        }
    }

    int matCont[N - 2][M - 2];

    for(i = 0; i < N - 2; i++){
        for(j = 0; j < M - 2; j++{
            matCont[i][j] = matTer[i][j];
        }
    }

    return 0;
}
