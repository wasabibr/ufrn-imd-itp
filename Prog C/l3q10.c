
#include <stdio.h>

int main() {

	int i, n, soma;

	printf("Digite n: ");
	scanf("%d", &n);

	soma = 0;
	for(i = 1; i < n; i++) {
		if(n%i == 0) {
			soma = soma + i; //soma += i
		}
	}
	if(soma == n) {
		printf("%d eh um numero perfeito\n", n);
	} else {
		printf("%d nao eh um numero perfeito\n", n);
	}

	return 0;
}
