#include <stdio.h>
#include <math.h>

// Function to count number of digits
int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to check if a number is Armstrong
int isArmstrong(int num) {
    int original = num;
    int digits = countDigits(num);
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += (int)pow(digit, digits);
        num /= 10;
    }

    return sum == original;
}

int main() {
    int limit;

    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    printf("Armstrong numbers between 1 and %d are:\n", limit);

    for (int i = 1; i <= limit; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
