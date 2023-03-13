#include <stdio.h>

void ft_swap(int a, int b, int *div, int *mod) {
  *div = a / b;
  *mod = a % b;
}

int main(void) {
  int a;
  int b;
  int div;
  int mod;

  a = 10;
  b = 5;
  ft_swap(a, b, &div, &mod);
  printf("%d/%d = %d/%d\n", a, b, div, mod);
}
