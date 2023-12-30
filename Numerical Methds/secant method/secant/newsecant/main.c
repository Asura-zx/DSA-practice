
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define f(x) cos(x) - x *exp(x) // e^x
#define e 0.001
int main() {
  float x1, x2, x0, y1, y2, y3, E, y;
  int count = 0;
  printf("Type values of x1 and x2");
  scanf("%f %f", &x1, &x2);

  do {
    y2 = f(x2);
    y1 = f(x1);
    x0 = x2 - (y2 * (x2 - x1) / (y2 - y1));
    x1 = x2;
    x2 = x0;
    E = fabs(x1 - x2);
  } while (E > e);
  printf("root is %f", x0);
  return 0;
}
