#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 3;
    float result;

    // Division without typecasting
    result = x / y;
    printf("Without typecasting: %f\n", result);

    // Division with typecasting
    result = (float)x / y;
    printf("With typecasting: %f\n", result);

    // Operator precedence example
    int a = 5, b = 3, c = 4;
    int precedence_result = a + b * c;
    printf("Without parentheses: %d\n", precedence_result);

    precedence_result = (a + b) * c;
    printf("With parentheses: %d\n", precedence_result);

    return 0;
}
