#include <stdio.h>
 
main() {

	float a; 
	int b;
		
	printf("\nDigite os valores de a e b: ");
	scanf("%f %d", &a, &b);
	if (b != 0){
		printf("%.0f divido por %d resulta em: %.2f\n\n", a, b, a/b);
	}
	else
		printf("b não pode ser igual a 0.\n\n");
	return 0; 

}
