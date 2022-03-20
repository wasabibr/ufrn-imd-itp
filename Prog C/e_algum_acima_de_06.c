#include <stdio.h>

main(){

	int i, n;

	printf("Digite n:");
	scanf("%d", &n);

	printf("Pares: ");
	i=1;
	while(i<=n){
		if(i%2==0){
			printf("%d", i)
		}
		i++
	}
	
