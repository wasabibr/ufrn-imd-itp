#include <stdio.h>
 
main() {
 
	float n1, n2, n3, m;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	m=(n1+n2+n3)/3;
	
	if(m>=9.5)
		printf("Conceito: A\n");
	if (9.5>m>=8.5)
		printf("Conceito: B\n");
	if (8.5>m>=7.0)
		printf("Conceito: C\n");
	if (7.0>m>=6.0)
		printf("Conceito: D\n");
	if (m<6.0)
		printf("Conceito: F\n");
				
	return 0;
}
