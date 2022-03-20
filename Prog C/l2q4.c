#include <stdio.h>

int main() {

	float x0, y0, x1, y1, px, py;

	scanf("%f %f %f %f %f %f", &x0, &y0, &x1, &y1, &px, &py);

	if(px >= x0 && px <= x1 && py >= y1 && py <= y0) 
		printf("O ponto esta dentro do retangulo\n");
	else
		printf("O ponto nao esta dentro do retangulo\n");

	return 0;
}

