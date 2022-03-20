#include <stdio.h>
 
main() {
 
	int a, b;
		
	printf("\n\nDigite dois inteiros a (a>0) e b (b>0): ");
	scanf("%d %d", &a, &b);
	if(a>0 && b>0){
		if(a%b==0 || b%a==0){
			printf("Um dos número divido o outro.\n\n");
		}
		else
			printf("Nenhum dos número divide o outro.\n\n");
	}
	else
		printf("Os valores não são válidos.\n\n");
		
	return 0; 

}
