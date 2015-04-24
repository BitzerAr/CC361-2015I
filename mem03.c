#include <stdio.h>
#include <stdlib.h>

int sumatoria(int iteracion, int x, int y)
{
  int * temp = (int*)malloc(sizeof(int));
  printf("x%d: #%p\n", iteracion, &x);
  printf("y%d: #%p\n", iteracion, &y);
  printf("temp%d: #%p\n", iteracion, temp);

  if (x==y) {
    return y;
  }

  return x + sumatoria(iteracion+1, x+1, y);
}

int main()
{
  int a = 1;
  int b = 5;

  int c = sumatoria(1, a, b);
   
  printf("sumatoria %d -> %d = %d\n", a, b, c);

  printf("main: #%p\n", main);
  printf("sumatoria: #%p\n", sumatoria);
  printf("a: #%p\n", &a);
  printf("b: #%p\n", &b);

  return 0;
}
