#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (choice) {
        case 1:
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
