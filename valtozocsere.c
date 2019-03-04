#include <stdio.h>

int main (void)
{

  int a = 5, b = 8;

  printf ("a=%d b=%d\n", a, b);

  a = a - b;
  b = a + b;
  a = b - a;

  printf ("a=%d b=%d\n", a, b);

  return 0;
}