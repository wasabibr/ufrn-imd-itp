#include <stdio.h>

int main() {

	int d;
	scanf("%d", &d);

	if(d == 4 || d == 6 || d == 9 || d == 11)
		printf("30 dias\n");
	else {
		if(d == 2)
			printf("29 dias\n");
		else
			printf("31 dias\n");
	}

	return 0;
}

