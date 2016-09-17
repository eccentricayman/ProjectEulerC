#include <stdio.h>

int main() {
  int n1 = 1;
  int n2 = 2;
  int total = 0;
  while (n2 <= 4000000) {
    int newn2 = n2 + n1;
    n1 = n2;
    n2 = newn2;
    if (n1 % 2 == 0) {
      total += n1;
    }
    if (n2 % 2 == 0) {
      total += n2;
    }
  }
  printf("%d", total);
  return 0;
}
