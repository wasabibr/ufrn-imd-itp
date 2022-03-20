#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {

	int vetor[] = {5, 2, 7, 4, 3, 1, 8, 9, 6, 0};
	int i;
	int indice1, indice2, tmp;
	int estaOrdenado = 0;

	srand(time(NULL));
	while(!estaOrdenado) {
		//troca dois elementos
		indice1 = rand()%10;
		indice2 = rand()%10;
		tmp = vetor[indice1];
		vetor[indice1] = vetor[indice2];
		vetor[indice2] = tmp;

		//verifica se esta ordenado
		estaOrdenado = 1;
		for(i = 0; i < 9; i++) {
			if(vetor[i] > vetor[i+1])
				estaOrdenado = 0;
		}
	}
	
	for(i = 0; i < 10; i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n");

	return 0;
}
