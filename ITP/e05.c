#include <stdio.h>
 
main() {
 
	int a, b, ap, bp;

	printf("Digite o número de gols do time A: ");
	scanf("%d", &a);
	printf("Digite o número de gols do time B: ");
	scanf("%d", &b);
	if(a>b || b>a){
		if(a>b)
			printf("Vencedor: Time A");
		else
			printf("Vencedor: Time A");
	}
	else {
		printf("Digite o número de gols do time A nos penaltis: ");
		scanf("%d", &ap);
		printf("Digite o número de gols do time B nos penaltis: ");
		scanf("%d", &bp);
		if(ap>bp || bp>ap){
			if(a>b)
				printf("Vencedor: Time A");
			else
				printf("Vencedor: Time A");
		}
	}
	
	return 0;
}
		
