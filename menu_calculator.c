#include <stdio.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int modulus(int a, int b);

int main() {
    int choice;
    float num1, num2, result;
    int n1, n2, mod_result;

    do {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            if (choice == 5) {
                printf("Enter two integers: ");
                scanf("%d %d", &n1, &n2);
            } else {
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
            }
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    result = divide(num1, num2);
                    printf("Result: %.2f\n", result);
                }
                break;
            case 5:
                if (n2 == 0) {
                    printf("Error: Modulus by zero!\n");
                } else {
                    mod_result = modulus(n1, n2);
                    printf("Result: %d\n", mod_result);
                }
                break;
            case 6:
                printf("Exiting program. Thank you!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}
