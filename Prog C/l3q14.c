#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

	int n, x, tentativas;

	srand(time(NULL));
	n = rand()%11;
	tentativas = 0;

	do {
		printf("Acerta o numero: ");
		scanf("%d", &x);
		tentativas++;
	} while(x != n);

	printf("Parabens! Voce acertou em %d tentativas\n", tentativas);

	return 0;
}
