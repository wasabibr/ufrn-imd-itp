#include <stdio.h>
 
main() {
 
	int hi, mi, hf, mf, ti, tf, th;

	printf("Digite as horas do hor�rio inicial: ");
	scanf("%d", &hi);
	printf("Digite minutos do hor�rio inicial: ");
	scanf("%d", &mi);
	printf("Digite as horas do hor�rio final: ");
	scanf("%d", &hf);
	printf("Digite as minutos do hor�rio final: ");
	scanf("%d", &mf);

	ti=hi*60+mi;
	tf=hf*60+mf;
	th=(ti-tf)/60;
	

	printf("Resultado: %dh%dmin", th, mi-mf);
	
	return 0;
}



