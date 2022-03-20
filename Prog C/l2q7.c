#include <stdio.h>
#include <stdlib.h>

int main() {

	int px, py; //posicao do primeiro cavalo
	int qx, qy; //posicao do segundo cavalo

	printf("Digite a linha da primeira peca: ");
	scanf("%d", &py);
	printf("Digite a coluna da primeira peca: ");
	scanf("%d", &px);

	printf("Digite a linha da segunda peca: ");
	scanf("%d", &qy);
	printf("Digite a coluna da segunda peca: ");
	scanf("%d", &qx);

	if( (abs(px - qx) == 1 && abs(py - qy) == 2) || (abs(px - qx) == 2 && abs(py - qy) == 1))
		printf("Atacam-se\n");
	else
		printf("Nao se atacam\n");

	return 0;
}

