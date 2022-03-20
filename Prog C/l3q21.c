
#include <stdio.h>

int main() {

	int i, j, n, k;

	printf("Digite n: ");
	scanf("%d", &n);

	k = 1;
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("%d ", k);
			k++;
		}
		printf("\n");
	}

	return 0;
}
