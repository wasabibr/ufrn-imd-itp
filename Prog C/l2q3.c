#include <stdio.h>

int main() {

	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(a >= b && a >= c && a >= d) 
		printf("O maior eh %d\n", a);
	else
		if(b >= a && b >= c && b >= d)
			printf("O maior eh %d\n", b);
		else
			if(c >= b && c >= a && c >= d)
				printf("O maior eh %d\n", c);
			else
				printf("O maior eh %d\n", d);

	return 0;
}

