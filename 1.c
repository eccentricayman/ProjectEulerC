#include <stdio.h>

int main() {
  int total = 0;
  for (int x = 0 ; x < 1000 ; x++) {
    if (x % 3 == 0 || x % 5 == 0) {
      total += x;
    }
  }
  printf("%d", total);
  return 0;
}
