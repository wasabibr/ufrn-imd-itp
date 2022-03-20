#include <stdio.h>

int main(void){
    int cA[11], cB[11], i = 0, j =0, contA = 0, contB = 0, contaA = 0, contaB = 0;
    float posA[11], posB[11];

    for(i = 0; i < 10; i++){
        scanf("%d", &cA[i]);
    }

    for(i = 0; i < 10; i++){
        scanf("%d", &cB[i]);
    }

    for(i = 0; i < 10; i++){
        scanf("%f", &posA[i]);
    }

    for(i = 0; i < 10; i++){
        scanf("%f", &posB[i]);
    }

    printf("A: ");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){

            if(posA[i] <= posB[j]){
                contA++;
            }
        }
        if(posA[i] < 0)
            contA ++;
        if(contA == 0){
            printf("%d ", cA[i]);
            contaA++;
        }
        contA = 0;
    }
    if(contaA == 0){
        printf("sem impedimentos");
    }

    printf("\nB: ");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(posB[i] >= posA[j]){
                contB++;
            }

        }
        if(contB == 0){
            printf("%d ", cB[i]);
            contaB++;
        }
        contB = 0;
    }
    if(contaB == 0){
        printf("sem impedimentos");
    }

    return 0;
}
