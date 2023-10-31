#include <stdio.h>

void armstrong(int num) {
    int originalNum = num, remainder, result = 0;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}

void coprime(int num) {
    int reversed = 0, temp, gcd, originalNum = num;

    while (num != 0) {
        temp = num % 10;
        reversed = reversed * 10 + temp;
        num /= 10;
    }
    printf("\n\t\t%d\t\t\n",reversed);

    int a = originalNum, b = reversed;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    if (gcd == 1)
        printf("%d and %d are coprime.\n", originalNum, reversed);
    else
        printf("%d and %d are not coprime.\n", originalNum, reversed);
}

int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    armstrong(num);
    coprime(num);

    int fact = factorial(num);
    printf("Factorial of %d is %d.\n", num, fact);

    return 0;
}
