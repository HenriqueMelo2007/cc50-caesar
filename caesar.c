#include <stdio.h>
#include <locale.h>


int main(int argc, char const *argv[])
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  printf("Oláç");

  return 0;
}
