#include <stdio.h>

int main() {

	int v[] = {5, 2, 7, 4, 3, 1, 8, 9, 6, 0};
	int i, j, tmp, menor;

	//selection sort
	for(j = 0; j <= 9; j++) {
		//percorre de vetor[j] a vetor[n-1] para descobrir o indice do menor
		menor = j;
		for(i = j; i <= 9; i++) {
			if(v[i] < v[menor]) {
				menor = i;
			}
		}
		//troca vetor[j] e vetor[menor]
		tmp = v[menor];
		v[menor] = v[j];
		v[j] = tmp;
	}
	
	for(i = 0; i < 10; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");

	return 0;
}
