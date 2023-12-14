#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    do {
        printf("Enter an operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);

        if (operator == 'q') {
            printf("Calculator exiting.\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        if (operator == '+') {
            result = num1 + num2;
        } else if (operator == '-') {
            result = num1 - num2;
        } else if (operator == '*') {
            result = num1 * num2;
        } else if (operator == '/') {
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero!\n");
                continue;  // Go back to the beginning of the loop
            }
        } else {
            printf("Invalid operator. Please try again.\n");
            continue;  // Go back to the beginning of the loop
        }

        printf("Result: %lf\n", result);

    } while (1);  // Infinite loop until 'q' is entered

    return 0;
}