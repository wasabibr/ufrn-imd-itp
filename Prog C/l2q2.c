#include <stdio.h>

int main() {

	int pts, ptsMinima, partidasRestantes;

	scanf("%d %d %d", &pts, &ptsMinima, &partidasRestantes);

	if(pts >= ptsMinima) {
		printf("Ja esta classificado\n");
	} else {
		if(ptsMinima - pts <= partidasRestantes*3) {
			printf("Eh possivel se classificar\n");
		} else {
			printf("Nao eh possivel se classificar\n");
		}
	}

	return 0;
}

