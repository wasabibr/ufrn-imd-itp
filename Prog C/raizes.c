#include <stdio.h>
#include <math.h>

int main() {

	//coeficientes da equacao do segundo grau
	float a, b, c;
	float delta;
	float x1, x2;

	scanf("%f %f %f", &a, &b, &c);
	delta = b*b - 4*a*c;
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);

	if(delta < 0) {
		printf("Não existe raiz real\n");
	} else {
		if(delta == 0) {
			printf("A unica raiz real é: %.03f\n", x1);
		} else {
			printf("As raizes são: %.03f e %.03f\n", x1, x2);
		}
	}

	return 0;
}

