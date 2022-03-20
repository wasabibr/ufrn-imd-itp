#include <stdio.h>

main(){

	int a, b, i;
	printf("Digite a e b:\n");	
	scanf("%d %d", &a, &b);
	if(a<b){
		for(i=a; i<=b; i++){
			printf("%d ", i);
		}
	}
	else{
		for(i=a; i>=b; i--){
			printf("%d ", i);
		}
	}
	printf("\n");	
	return 0;
}
