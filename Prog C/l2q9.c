#include <stdio.h>

int main() {

	int renda, historicoBom;

	printf("Digite a renda do cliente: ");
	scanf("%d", &renda);

	if(renda < 700) {
		printf("Alto risco\n");
	} else {
		printf("Digite se o historico de credito eh bom: ");
		scanf("%d", &historicoBom);
		if(renda >= 700 && renda < 3200) {
			if(historicoBom) {
				printf("Medio risco\n");
			} else {
				printf("Alto risco\n");
			}
		} else { //caso renda >= 3200
			if(historicoBom)
				printf("Baixo risco\n");
			else 
				printf("Medio risco\n");
		}
	}

	return 0;
}
