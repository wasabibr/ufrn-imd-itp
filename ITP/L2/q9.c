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
	{
		printf("Conceito: A\n");
	}
	else
	{
		if (9.5>m && m>=8.5)
		{
			printf("Conceito: B\n");
		}
		else
		{
			if (8.5>m && m>=7.0)
			{
				printf("Conceito: C\n");
			}
			else
			{
				if (7.0>m && m>=6.0)
				{
					printf("Conceito: D\n");
				}
				else
					printf("Conceito: F\n");
			}
		}
	}
								
	return 0;
}
