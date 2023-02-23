#include <stdio.h>

int main()
{
    double num1, num2;
    char operation;
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);
    
    switch (operation) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }
    
    return 0;
}
