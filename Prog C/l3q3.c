#include <stdio.h>

int main() {

	int i, soma, n;

	printf("Digite o valor de n : ");
	scanf("%d", &n);

	soma = 0;
	for(i = 1; i <= n; i++) {
		soma = soma + i;
	}
	printf("somatorio = %d\n", soma);

	return 0;
}
