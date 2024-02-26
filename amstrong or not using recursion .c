  #include <stdio.h>
#include <math.h>

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int numberOfDigits(int number) {
    if (number == 0)
        return 0;
    else
        return 1 + numberOfDigits(number / 10);
}

int isArmstrong(int number, int originalNumber, int n) {
    if (number == 0)
        return 0;
    else
        return pow(number % 10, n) + isArmstrong(number / 10, originalNumber, n);
}

int main() {
    int number, n, sum;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    n = numberOfDigits(number);
    sum = isArmstrong(number, number, n);

    if (sum == 'originalNumber')
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
