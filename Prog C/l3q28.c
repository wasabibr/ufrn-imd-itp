#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

	//numeros que compoem a senha
	int s1, s2, s3, s4, s5;
	//numeros do palpite
	int p1, p2, p3, p4, p5;
	int numPalpites = 0;
	int numPinosCertos;

	srand(time(NULL));
	//sorteando a senha
	s1 = rand()%6;
	s2 = rand()%6;
	s3 = rand()%6;
	s4 = rand()%6;
	s5 = rand()%6;

	do {
		printf("Digite seu palpite: ");
		scanf("%d %d %d %d %d", &p1, &p2, &p3, &p4, &p5);
		numPalpites++;
		numPinosCertos = 0;
		if(p1 == s1) numPinosCertos++;
		if(p2 == s2) numPinosCertos++;
		if(p3 == s3) numPinosCertos++;
		if(p4 == s4) numPinosCertos++;
		if(p5 == s5) numPinosCertos++;
		printf("Ha %d pino(s) certo(s)\n", numPinosCertos);
		if(numPalpites == 10)
			break;
	} while(p1 != s1 || p2 != s2 || p3 != s3 || p4 != s4 || p5 != s5);

	if(numPinosCertos == 5)
		printf("Parabens! Voce acertou a senha com %d tentativas\n", numPalpites);
	else
		printf("Game over, perdeu!\n");

	return 0;
}

















