#include <stdio.h>

int main() {

	int a, b, c;

	printf("Digite A: ");
	scanf("%d", &a);
	printf("Digite B: ");
	scanf("%d", &b);
	printf("Digite C: ");
	scanf("%d", &c);

	if(a == b + c || b == a + c || c == a + b) {
		printf("Um dos numeros eh a soma dos outros dois\n");
	} else {
		printf("Nenhum dos numeros eh a soma dos outros dois\n");
	}

	return 0;
}

