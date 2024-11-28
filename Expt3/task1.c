#include <stdio.h>

int main() {
    float num1, num2, result;
    int mod_result;
    char operator;

    printf("\t\t\t *** Calculator *** \n\n\n");
    printf("\t\t Enter an operation: \n\n\n");
    printf("\t\t\t + : Addition \n\n");
    printf("\t\t\t - : Subtraction \n\n");
    printf("\t\t\t * : Multiplication \n\n");
    printf("\t\t\t / : Division \n\n");
    printf("\t\t\t %% : Modulus \n\n");

repeat:
    printf("Enter first operand: ");
    scanf("%f", &num1);
    printf("Enter second operand: ");
    scanf("%f", &num2);
    printf("Enter an operation: ");
    scanf(" %c", &operator); 

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.1f + %.1f = %.1f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.1f - %.1f = %.1f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.1f * %.1f = %.1f\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Cannot divide by zero.\n");
                break;
            }
            result = num1 / num2;
            printf("%.1f / %.1f = %.1f\n", num1, num2, result);
            break;

        case '%':
            mod_result = (int)num1 % (int)num2;
            printf("%.0f %% %.0f = %d\n", num1, num2, mod_result);
            break;

        default:
            printf("Invalid operator. Try again.\n");
            break;
    }

    printf("Continue (Y/N): ");
    scanf(" %c", &operator); // Again, space before %c
    if (operator == 'N' || operator == 'n') {
        printf("Thank you for using the calculator.\n");
        return 0;
    }
    printf("\n");
    goto repeat;

    return 0; 
}
