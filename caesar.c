#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  if (argc != 2) {
    printf("Defina atrav�s da interface de linha de comando uma �nica chave para a cifra de Caesar!");
    return 1;
  }

  char *textoSimples;

  printf("Sua chave: %s\n", argv[1]);

  printf("Texto simples: ");
  scanf("%s", textoSimples);

  printf("Texto cifrado: \n");
  

  return 0;
}