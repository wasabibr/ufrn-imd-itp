#include <stdio.h>

main(){
	
	int t, vm, s;
	float l;
	scanf("%d %d", &t, &vm);
	s=vm*t;
	l=s/12.0;
	printf("%.3f\n", l);
	
	return 0;
}
