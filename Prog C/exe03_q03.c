#include <stdio.h>

main(){
	
	int n, som, i=1;
	printf("Digite um valor: ");
	scanf("%d", &n);
	while(i<=n){
		i++;
		som +=i;
	}
	printf("O somatorio eh: %d\n", som);
	return 0;
}
