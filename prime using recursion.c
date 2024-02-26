#include <stdio.h>

int isPrime(int num, int i) {
    if (i == 1)
        return 1;
    else {
        if (num % i == 0)
            return 0;
        else
            return isPrime(num, i - 1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i, i / 2)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
