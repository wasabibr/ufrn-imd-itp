#include <stdio.h>

main(){

	int x, n;
	printf("Digite x e n:\n");	
	scanf("%d %d", &x, &n);
	while (n != 0){
		printf("%d\n", x);
		n--; 
	} 
	
	return 0;
}
