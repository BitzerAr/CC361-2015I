#include <stdio.h>
#include <stdlib.h>

int suma(int x, int y)
{
  printf("x: #%p\n", &x);
  printf("y: #%p\n", &y);
  return x + y;
}

int main()
{
  int a = 1;
  int b = 2;

  int c = suma(a,b);
   
  printf("suma %d + %d = %d\n", a, b, c);

  printf("main: #%p\n", main);
  printf("suma: #%p\n", suma);
  printf("a: #%p\n", &a);
  printf("b: #%p\n", &b);

  return 0;
}
