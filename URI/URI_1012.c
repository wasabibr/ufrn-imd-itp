#include <stdio.h>
#include <math.h>

main(){
	
	float A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
	scanf("%f %f %f", &A, &B, &C);
	TRIANGULO=A*C/2;
	CIRCULO=3.14159*pow(C,2);
	TRAPEZIO=(A+B)*C/2;
	QUADRADO=pow(B,2);
	RETANGULO=A*B;
	printf("TRIANGULO:%.3f\n", TRIANGULO);
	printf("CIRCULO:%.3f\n", CIRCULO);
	printf("TRAPEZIO:%.3f\n", TRAPEZIO);
	printf("QUADRADO:%.3f\n", QUADRADO);
	printf("RETANGULO:%.3f", RETANGULO);
	return 0;
}
