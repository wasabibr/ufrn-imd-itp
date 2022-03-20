#include <stdio.h>

int main() {

	float a, b, c;
	int n, quantidade, i;

	quantidade = 0;

	printf("Digite a quantidade de predios: ");
	scanf("%d", &n);
	scanf("%f %f %f", &a, &b, &c);
	if(b > a && b > c)
		quantidade++;

	for(i = 1; i <= n - 3; i++) {
		a = b;
		b = c;
		scanf("%f", &c);
		if(b > a && b > c)
			quantidade++;
	}
	printf("Ha %d predios maiores\n", quantidade);


	return 0;
}
