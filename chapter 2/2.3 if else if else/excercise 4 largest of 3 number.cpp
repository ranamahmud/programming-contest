#include <stdio.h>

int main() {
  int a, b, c, max;
  scanf("%d %d %d", &a, &b, &c);
  if (a > b && a > c) {
    max = a;
  } else if (b > a && b > c) {
    max = b;
  } else if (c > a && c > b) {
    max = c;
  }
  printf("max = %d\n", max);
  return 0;
}