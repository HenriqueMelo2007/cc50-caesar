#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  if (argc != 2) {
    printf("Defina atrav�s da interface de linha de comando uma �nica chave para a cifra de Caesar!");
    return 1;
  }

  char *textoSimples = (char *)malloc(100);
  int key = atoi(argv[1]);

  printf("Sua chave: %i\n", key);

  printf("Texto simples: ");
  scanf("%s", textoSimples);


  printf("Texto cifrado: ");
  for (int i = 0; textoSimples[i] != '\0'; i++) {

    if ( ( textoSimples[i] >= 65 && textoSimples[i] <= 90 ) || ( textoSimples[i] >= 97 && textoSimples[i] <= 122 ) ) {
      printf("%c", textoSimples[i] + key);
    } else {
      printf("%c", textoSimples[i]);
    } 
  }



  free(textoSimples);
  return 0;
}