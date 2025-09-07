#include <stdio.h>

int main() {
    char operator;
    double num1, num2;
    double result;

    printf("[Calculator]\n");
    printf("1 -- Add\n");
    printf("2 -- Sub\n");
    printf("3 -- Div\n");
    printf("Choose your operation: ");
    scanf(" %c", &operator);  

    printf("Enter number 1: ");
    scanf("%lf", &num1);      

    printf("Enter number 2: ");
    scanf("%lf", &num2);      

    switch(operator) {
        case '1':
            result = num1 + num2;
            printf("\nResult: %.2lf\n", result);
            break;
        case '2':
            result = num1 - num2;
            printf("\nResult: %.2lf\n", result);
            break;
        case '3':
            if (num2 == 0) {
                printf("\nError: Division by zero!\n");
            } else {
                result = num1 / num2;
                printf("\nResult: %.2lf\n", result);
            }
            break;
        default:
            printf("\n%c is not valid\n", operator);
    }

    return 0;
}

