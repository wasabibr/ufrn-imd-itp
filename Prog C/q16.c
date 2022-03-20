#include <stdio.h>
#include <math.h>

main(){
	
	float v, t, a;
	printf("Digite a velocidade inicial (m/s): ");
	scanf("%f", &v);
	printf("Digite o angulo inicial (radianos): ");
	scanf("%f", &a);
	printf("Digite o instante de tempo (segundos): ");
	scanf("%f", &t);
	printf("O objeto esta em: %f %f\n", v*cos(a)*t, v*sin(a)*t-9.8*pow(t,2)/2);
	return 0;
}
