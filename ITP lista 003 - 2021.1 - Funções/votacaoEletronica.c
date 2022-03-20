/*



*/

#include <stdio.h>


int votingChain(int cumulativeVotes, int newVote){
    int vetCan[5] = {2, 3, 5, 7, 11};

    cumulativeVotes *= vetCan[newVote];

    return cumulativeVotes;
}


int main(void){

    int C = 0, votos = 0, acumulaVoto = 1, novoVoto = 0, i = 0, aux = 1;

    scanf("%d", &C);
    if(C > 5)
        scanf("%d", &C);
    scanf("%d", &votos);
    scanf("%d", &novoVoto);

    while(i < votos){
        aux = votingChain(acumulaVoto, novoVoto);
        scanf("%d", &novoVoto);
        acumulaVoto = aux;
        i++;
    }

    printf("%d", acumulaVoto);

    return 0;
}
