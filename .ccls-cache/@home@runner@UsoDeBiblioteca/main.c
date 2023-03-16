#include "nova_bib.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int num;
  if (argc != 2) {
    printf("Forneca um numero\n");
    scanf("%d", &num);
  } else
    //A função da biblioteca C int atoi(const char *str) converte o argumento de string str em um inteiro (tipo int).
    num = atoi(argv[1]);

  printf("\n\tfatorial\n");
  int fat = fatorial(num);
  printf("Fatorial de % d = % d\n", num, fat);

  printf("\n\tfibonacci\n");
  int fib = fibonacci(num);
  printf("Soma dos % d primeiros numeros de Fibonacci = % d\n\n", num, fib);
  return 0;
}