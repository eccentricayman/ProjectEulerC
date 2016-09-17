#include <stdio.h>

int isprime(long tocheck) {
    if (tocheck == 1 || (tocheck % 2 == 0 && tocheck > 2)) {
        return 0;
    }
    for (int i = 3 ; i < tocheck / 2 ; i++) {
        if (tocheck % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("%d", isprime(600851475143));
    // let's start out with 2 ya?
    long primethingy = 2;
    long number = 600851475143;
    while (!(isprime(number))) {
        if (number % primethingy == 0) {
            number /= primethingy;
        }
        else {
            primethingy++;
        }
    }
    printf ("%lu", number);
    return 0;
}
