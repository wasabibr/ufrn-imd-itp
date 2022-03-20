#include <stdio.h>

int main() {

	int i, n, num, maior;

	printf("Digite n: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		scanf("%d", &num);
		if(i == 1 || num > maior) {
			maior = num;
		}
	}

	printf("%d\n", maior);

	return 0;
}
