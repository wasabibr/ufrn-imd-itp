#include <stdio.h>

main(){

	int i, j, n;

	printf("Digite n:");
	scanf("%d", &n);
	
	i=1;
	j=0;

	printf("Pares: ");
	while (i <= n){
		printf("%d ", i);
		i=(2*i);
	}
	

		
	printf("Ímpares: ");
	while (j <= n){
		printf("%d ", i);  
		i=(2*i+1);
	}

	return 0;
)
	
