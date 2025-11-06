#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    while (1) {
        // Display menu
        printf("\n--- Simple Calculator ---\n");
        printf("Enter an operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);  // Space before %c to catch newline

        // Check for quit condition
        if (operator == 'q' || operator == 'Q') {
            printf("Exiting calculator...\n");
            break;
        }

        // Input two numbers
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        // Switch based on operator
        switch(operator) {
            case '+':
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;
            case '/':
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("Result = %.2lf\n", result);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            default:
                printf("Error! Invalid operator.\n");
        }
    }

    return 0;
}

