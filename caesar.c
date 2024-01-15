#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int cipherTransformation (int key, int valueChar, int maxValue);

int main(int argc, char const *argv[])
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  if (argc != 2) {
    printf("Defina atrav�s da interface de linha de comando uma �nica chave para a cifra de Caesar!");
    return 1;
  }

  char textoSimples[100];
  int key = atoi(argv[1]);

  printf("Sua chave: %i\n", key);

  printf("Texto simples: ");
  scanf("%s", textoSimples);


  printf("Texto cifrado: ");

  for (int i = 0; textoSimples[i] != '\0'; i++) {

    int valueChar = (int) textoSimples[i];

    if (valueChar >= 65 && valueChar <= 90) {

      int cipherCaracter = cipherTransformation(key, valueChar, 90); 
      printf("%c", cipherCaracter);
    } 

    else if (valueChar >= 97 && valueChar <= 122) {

      int cipherCaracter = cipherTransformation(key, valueChar, 122); 
      printf("%c", cipherCaracter);
    } 

    else {
      printf("%c", textoSimples[i]);
    } 
  }


  return 0;
}

int cipherTransformation (int key, int valueChar, int maxValue) {

  for (int i = 0; i < key; i++) {
       valueChar++;
       if ( valueChar > maxValue ) {
        valueChar -= 26;
       }   
  }

  return valueChar; 
}