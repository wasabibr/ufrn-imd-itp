/*
#include <stdio.h>
#include <string.h>


int main () {
   char haystack[200];
   char needle[10];
   char *ret;

    gets(haystack);
    gets(needle);

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   return(0);
}
*/


int main(void)
{
   char *psRetorno;
   char sFrase[]="era uma vez acabou de acabar o acaso";
   char sChave[]="aca";

   //printf("\nFrase = %s", sFrase);

   /* Primeira pesquisa por espaço em branco. */
   psRetorno = strtok(sFrase, sChave);

   printf("\nRetorno = %s", psRetorno);
   printf("\nFrase = %s", sFrase);


   return 0;
}

