#include <stdio.h>

int main(){

	int lista1[10], lista2[10];
	int size1, size2;
	int i,j,cont;

	printf("Digite o tamanho da primeira lista: ");
	scanf("%d", &size1);

	for(i=0;i<size1;i++){
		printf("Digite o numero da musica %d: ", i+1);
		scanf("%d", &size2);
	}
	
	for(i=0;i<size2;i++){
		printf("Digite o numero da musica %d: ", i+1);
		scanf("%d", &lista2[i]);
	}

	for(i=0;i<size1;i++){
		for(i=0;i<size2;j++){
			if(lista1[i]==lista2[j]){
				cont++;
				break;
			}
		}
	}
			
	printf("Ha %d musicas da primeira lista na segunda lista\n", cont);

	return 0;
}
