#include <unistd.h>

void ft_prin_comb(void) {
  int a;
  int b;
  int c;

  a = 48;
  b = 49;
  c = 50;

  while (a <= 55) {
    write(1, &a, sizeof(int));
    write(1, &b, sizeof(int));
    write(1, &c, sizeof(int));

    if (a == 55 && b == 56 && c == 57) {
      write(1, &"\n", sizeof(char));
    }

    if (c == 57) {
      b += 1;
      c = b + 1;
      if (b == 57) {
        a += 1;
        b = a + 1;
        c = b + 1;
      }
    } else {
      c++;
    }

    if (b <= 57) {
      write(1, &",  ", 2);
    }
  }
}

int main(void) {
  ft_prin_comb();
  return 0;
}