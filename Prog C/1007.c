#include <stdio.h>
 
int main() {
 
    double A, B, C, D, DIFERENCA;
	scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
	DIFERENCA=A*B-C*D;
	printf("MEDIA = %.1lf\n", DIFERENCA);

    return 0;
}
