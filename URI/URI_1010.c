#include <stdio.h>

main(){
	
	int cp1, np1, cp2, np2;
	float vp1, vp2, v;
	scanf("%d %d %f", &cp1, &np1, &vp1);
	scanf("%d %d %f", &cp2, &np2, &vp2);
	v=np1*vp1+np2*vp2;
	printf("VALOR A PAGAR: R$ %.2f\n", v);
	
	return 0;
}
