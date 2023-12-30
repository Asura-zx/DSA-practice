#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define f(x) cos(x) - x *exp(x)           // e^x
#define g(x) -sin(x) - x *exp(x) - exp(x) // derivative
#define e 0.001
int main() {
  float x0, x, y, y1, E;
  printf("type the value of x: ");
  scanf("%f", &x);
  do {
    y = f(x);
    y1 = g(x);
    x0 = x - y / y1;
    E = fabs(x - x0);
    x = x0;
  } while (E > e);
  printf("%f", x0);
  return 0;
}
