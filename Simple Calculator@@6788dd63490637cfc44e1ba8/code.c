#include <stdio.h>

int main() {
    int a, b;
    char c;
    
    // Adding space before %c to consume any trailing newline or space
    scanf("%d %d %c", &a, &b, &c);
    
    // Checking the operator and performing the corresponding operation
    if (c == '+') {
        printf("%d", a + b);
    }
    else if (c == '-') {
        printf("%d", a - b);
    }
    else if (c == '*') {
        printf("%d", a * b);
    }
    else if (c == '/') {
        // Corrected check for division by zero
        if (b != 0) {
            printf("%d", a / b);
        }
        else {
            printf("error"); // Division by zero error
        }
    }
    else {
        printf("error"); // Invalid operator error
    }

    return 0;
}
