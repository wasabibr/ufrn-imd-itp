#include <stdio.h>

int main() {

	int precoPrimeiro, precoSegundo, disponivel;
	int i, j;
	int resto;
	int menorResto, iMenor, jMenor;

	printf("Digite o preco do primeiro fornecedor: ");
	scanf("%d", &precoPrimeiro);
	printf("Digite o preco do segundo fornecedor: ");
	scanf("%d", &precoSegundo);
	printf("Digite quanto ha disponivel para gastar: ");
	scanf("%d", &disponivel);

	menorResto = disponivel;
	iMenor = jMenor = 0;
	for(i = 0; i <= 10; i++) {
		for(j = 0; j <= 10; j++) {
			resto = disponivel - i*precoPrimeiro - j*precoSegundo;
			if(resto >= 0 && resto < menorResto) {
				menorResto = resto;
				iMenor = i;
				jMenor = j;
			}
		}
	}

	printf("Comprando %d do primeiro e %d do segundo resta: %d\n", iMenor, jMenor, menorResto);
	return 0;
}

