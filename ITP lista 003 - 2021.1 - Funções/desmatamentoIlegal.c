#include <stdio.h>

int dentroOuFora(int x1, int x2, int x3, int y1, int y2, int y3){
    if((x3 >= x1) && (x3 <= x2) && (y3 >= y1) && (y3 <= y2)){
        return 1;
    } else {
        return 0;
    }
}

int verifica(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4){
    if(dentroOuFora(x1, x2, x3, y1, y2, y3) == 1 || dentroOuFora(x1, x2, x4, y1, y2, y4) == 1){
        return 1;
    } else {
        return 0;
    }
}


int main(void){
    int x1, x2, x3, x4, y1, y2, y3, y4, N = 0, i = 0, cont = 0;
    scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &N);

    while(i < N){
        scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
        if(verifica(x1, x2, x3, x4, y1, y2, y3, y4) == 1){
            cont++;
        }
        i++;
    }

    if(cont > 0){
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
