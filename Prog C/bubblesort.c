#include <stdio.h>

int main() {

	int vetor[] = {5, 2, 7, 4, 3, 1, 8, 9, 6, 0};
	int i, j, tmp, houveTroca;

	//bubblesort
	for(j = 1; j <= 9; j++) {
		houveTroca = 0;
		for(i = 0; i <= 9-j; i++) {
			if(vetor[i+1] < vetor[i]) {
				tmp = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = tmp;
				houveTroca = 1;
			}
		}
		if(!houveTroca)
			break;
	}
	
	for(i = 0; i < 10; i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n");

	return 0;
}
