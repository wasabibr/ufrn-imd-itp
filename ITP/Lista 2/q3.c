#include <stdio.h>
 
main() {
 
	int a, b, c;
		
	printf("Digite A: ");	
	scanf("%d", &a);
	printf("Digite B: ");	
	scanf("%d", &b);
	printf("Digite C: ");	
	scanf("%d", &c);
	if(a+b==c || a+c==b || b+c==a){
		printf("Um dos número é a soma dos outros dois.\n\n");
	}
				
	return 0; 

}
