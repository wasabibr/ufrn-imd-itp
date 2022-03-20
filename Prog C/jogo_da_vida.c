#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){

	int M[30][80];
	int M2[30][80];
	int L=50; // numero de linhas
	int C=80; // numero de colunas
	int i, j, vivos, dx, dy;

	srand(time(NULL)); // inicia a seed (semente)
	for(i=0;i<L;i++){
		for(j=0;j<C;j++){

			M[i][j]=rand()%2; // gera a matriz randonica com 0 ou 1		
		}
	}

	while(1){ // loop infinito
		
		for(i=1;i<L-1;i++){
			for(j=1;j<C-1;j++){
				// calcula a quantidade de vizinhos vivos
				vivos=0;
				for(dx=-1;dx<=1;dx++){
					for(dy=-1;dy<=1;dy++){	
						if(dx==0 && dy==0)
							continue;
						if(M[i+dy][j+dx]==1){
							vivos++;
						}
					}
				}
				// aplica as regras para obter a nova geracao (armazena em M2)			
				if(M[i][j]==1){
					if(vivos==2 || vivos==3)
						M2[i][j]=1;
					else
						M2[i][j]=0;
				} else {
					if(vivos==3)
						M2[i][j]=1;
					else
						M2[i][j]=0;				
				}	

			}
		}

		// transfere os valores da nova geracao (M2) para a geracao atual (M)
		for(i = 0; i < L; i++) {
			for(j = 0; j < C; j++) {
				M[i][j] = M2[i][j];
			}
		}			

		system("clear"); // limpar a tela		
		for(i=0;i<L;i++){
			for(j=0;j<C;j++){
				if(M[i][j]==0)
					printf("-");	
				else		
					printf("#");
				}
			printf("\n");	
		}
		usleep(100000); // dorme a tela em milisegundos
	}


	return 0;

}
