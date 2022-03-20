#include <stdio.h>

int mergeArrayOrd(int nX, int nY, int *arrayX, int *arrayY);


int main(void){
    int nA = 0, nB = 0, arrayA[20], arrayB[20], i = 0;

    scanf("%d %d", &nA, &nB);

    for(i = 0; i < nA; i++){
        scanf("%d", &arrayA[i]);
    }

    for(i = 0; i < nB; i++){
        scanf("%d", &arrayB[i]);
    }

    mergeArrayOrd(nA, nB, arrayA, arrayB);

    return 0;
}


int mergeArrayOrd(int nX, int nY, int *arrayX, int *arrayY){

    int arrayXY[40], aux = 0, i = 0, j = 0, n = 0;

    for(i = 0; i < nX; i++){
        arrayXY[i] = arrayX[i];
    }

    for(i = 0; i < nY; i++){
        arrayXY[nX + i] = arrayY[i];
    }

    n = nX + nY;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(arrayXY[i] < arrayXY[j]){
                aux = arrayXY[i];
                arrayXY[i] = arrayXY[j];
                arrayXY[j] = aux;
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", arrayXY[i]);
    }

    return 0;
}
