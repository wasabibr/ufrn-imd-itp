#include <stdio.h>
#include <math.h>
 
int main() {
 
	float a, b, c, delta, x1, x2;
		
	printf("Digite os valores de a, b e c: ");
	scanf("%f %f %f", &a, &b, &c);
	delta = pow(b,2) - 4 * a * c;
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
	printf("\n\nA equação %.1fx² + %.1fx + %.1f = 0, possui as seguintes raizes:\n\nx1 = %f \nx2 = %f\n\n", a, b, c, x1, x2);
	return 0; 

}
