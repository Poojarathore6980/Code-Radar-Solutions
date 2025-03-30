#include <stdio.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;  // Numbers < 2 are not prime
    }

    for (int i = 2; i * i <= num; i++) {  // Check divisibility up to sqrt(num)
        if (num % i == 0) {  // ✅ Corrected condition
            return 0;  // Not prime
        }
    }

    return 1;  // Prime (if no divisors were found)
}