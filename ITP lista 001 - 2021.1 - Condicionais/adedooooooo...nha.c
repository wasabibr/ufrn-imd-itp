#include <stdio.h>

int main(void){

    int a1, a2, a3, a4, adedonha;
    char alfa = 64, arroba;
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    adedonha = a1 + a2 + a3 + a4;
    if(adedonha == 0){
        printf("Ei! Ninguém colocou nada!");
    } else {
        arroba = alfa + adedonha;
        if(arroba <= 90){
            printf("Letra: %c", arroba);
        } else {
            while(adedonha > 26){
                adedonha = adedonha - 26;
            }
            arroba = alfa + adedonha;
            printf("Letra: %c", arroba);
        }

    }

    return 0;
}
