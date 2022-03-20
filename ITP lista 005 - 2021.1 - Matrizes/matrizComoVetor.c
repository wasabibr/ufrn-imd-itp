#include <stdio.h>

int main(void){
    int N, h = 0 , i, j, L, C, iL, iC;

    scanf("%d", &N);

    int arrayVal[N];

    for(i = 0; i < N; i++){
        scanf("%d", &arrayVal[i]);
    }

    scanf("%d %d %d %d", &L, &C, &iL, &iC);

    printf("%d", arrayVal[iL * C + iC]);

    return 0;
}
