
#include <stdio.h>

int main() {

	int n, b, ehExponenciacao, m, expoente;

	printf("Digite o numero n: ");
	scanf("%d", &n);
	printf("Digite a base b: ");
	scanf("%d", &b);
	m = n;

	expoente = 0;
	ehExponenciacao = 1;
	while(n != 1) {
		printf("n = %d\n", n);
		expoente = expoente + 1; //expoente += 1; expoente++;
		if(n%b == 0) {
			n = n/b;
		} else {
			ehExponenciacao = 0;
			break;
		}
	}
	if(ehExponenciacao) {
		printf("%d eh resultado de %d elevado a %d\n", m, b, expoente);
	} else {
		printf("%d nao eh resultado de uma exponenciacao na base %d\n", m, b);
	}


	return 0;
}
