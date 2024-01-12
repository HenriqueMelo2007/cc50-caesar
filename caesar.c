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

  for (int i = 0; textoSimples[i] != '\0'; i++) {
    printf("%c", textoSimples[i]);
  }

  printf("Texto cifrado: \n");



  free(textoSimples);


  return 0;
}