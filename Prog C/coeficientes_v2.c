#include <stdio.h>
#include <math.h>

int main(){

	// Coeficientes da equação dp segundo grau
	float a, b, c;
	float delta;
	float x1, x2;

	scanf("%f %f %f", &a, &b, &c);
	delta=b*b-4*a*c;
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);

	if(delta>0){
		printf("As raizes sao: %.03f e %.03f\n", x1, x2); 
	}

	if(delta==0){
		printf("A unica raiz real eh: %.03f\n", x1); 
	}

	if(delta<0){
		printf("Nao existe raiz real\n"); 
	}

	return 0;
}
