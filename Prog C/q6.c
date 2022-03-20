#include <stdio.h>
#include <math.h>
 
main() {
 
	int hi, mi, hf, mf, ti, tf, th, tm;
	
	printf("Digite as horas do horário inicial: ");
	scanf("%d", &hi);
	printf("Digite minutos do horário inicial: ");
	scanf("%d", &mi);
	printf("Digite as horas do horário final: ");
	scanf("%d", &hf);
	printf("Digite as minutos do horário final: ");
	scanf("%d", &mf);

	ti=hi*60+mi;
	tf=hf*60+mf;
	th=abs((ti-tf)/60);
	tm=abs(abs((ti-tf)/60)-th);
	
	

	printf("Resultado: %dh%fmin", th, tm);
	
	return 0;
}
