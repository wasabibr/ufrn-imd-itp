#include <stdio.h>
#include <string.h>

int buscaPadraoIng(char [], char []);

int main() {
  char texto[50], padrao[50];
  int posicao;

  gets(texto);
  gets(padrao);

  posicao = buscaPadraoIng(texto, padrao);

  if (posicao != 1) {
    printf("Achei o padrão no índice %d\n", posicao);
  }
  else {
    printf("Não achei o padrão\n");
  }

  return 0;
}

int buscaPadraoIng(char texto[], char padrao[]) {
  int i, j, l, m, texto_length, padrao_length, posicao;

  texto_length = strlen(texto);
  padrao_length = strlen(padrao);

  if (padrao_length > texto_length) {
    return 1;
  }

  for (i = 0; i <= texto_length - padrao_length; i++) {
    posicao = l = i;

    for (j = 0; j < padrao_length; j++) {
      if (padrao[j] == texto[l]) {

        l++;
      } else {

        break;
      }
    }
    if (j == padrao_length) {
        for(m = i; m < padrao_length + i; m++){
            printf("%c ", texto[m]);
        }
        printf("sim\n");
        return posicao;
    } else {
            for(m = i; m < padrao_length + i; m++){
              printf("%c ", texto[m]);
          }
        printf("não\n");
    }
  }
