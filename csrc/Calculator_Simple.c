#include <stdio.h>

int main() {
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator)
    {
    case '+':
        printf("%lf + %lf = %lf", first, second, first + second);
        break;
    case '-':
        printf("%lf - %lf = %lf", first, second, first - second);
        break;
    case '*':
        printf("%lf * %lf = %lf", first, second, first * second);
        break;
    case '/':
        printf("%lf / %lf = %lf", first, second, first / second);
        break;
    // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }
    print("\n");
    return 0;
}
