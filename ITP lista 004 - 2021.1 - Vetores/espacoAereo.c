#include <stdio.h>


int main(void){
    int tamanho = 0, arrayTam[55], equipes = 0, i = 0, j = 0, cI = 0, cF = 0, altMax = 0;

    scanf("%d %d", &tamanho, &equipes);

    for(i = 0; i <= tamanho; i++){
        arrayTam[i] = 0;
    }

    for(i = 0; i < equipes; i++){
        scanf("%d %d %d", &cI, &cF, &altMax);
        for(j = cI; j <= cF; j++){
            if(arrayTam[j] < altMax){
                arrayTam[j] = altMax;
            }
        }
    }

    for(i = 0; i <= tamanho; i++){
        printf("%d ", arrayTam[i]);
    }

    return 0;
}
