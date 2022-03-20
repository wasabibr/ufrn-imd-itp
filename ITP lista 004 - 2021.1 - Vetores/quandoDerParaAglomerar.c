#include <stdio.h>


int unique(int n, int values[n]){

    int uniqueValues[20], vetAux[20], i = 0, j = 0, cont = 0;

    for(i = 0; i < n; i++){
        vetAux[i] = values[i];
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(vetAux[i] == values[j] && j != i){
                vetAux[j] = 0;
            }
        }
    }

    j = 0;
    for(i = 0; i < n; i++){
        if(vetAux[i] != 0){
            uniqueValues[j] = vetAux[i];
            j++;
        }
    }
    cont = j;

    for(i = 0; i < cont; i++){
        printf("%d ", uniqueValues[i]);
    }

    return 0;
}


int main(void){
    int n, vetLista[20], i;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &vetLista[i]);
    }

    unique(n, vetLista[n]);

    return 0;
}
