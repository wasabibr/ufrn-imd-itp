#include <stdio.h>

main(){

	int n;
	printf("Digite n:");
	scanf("%d", &n);
	printf("A sequencia eh: ");
	while(n != 1){
		printf("%d ", n);
		if (n%2 == 0){
			n/=2;
		}
		else{
			n=3*n+1;
		}
	}
	printf("%d\n", n);	
	return 0;

}
