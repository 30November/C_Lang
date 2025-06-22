#include <stdio.h>
#include <math.h>

// Function to evaluate the operation on two operands
int value(char op, int b, int a) {
    switch (op) {
        case '+': return (a + b);
        case '-': return (a - b);
        case '*': return (a * b);
        case '/': return (a / b);
        case '^': return pow(a, b);  // Corrected order: a^b
        default: printf("Invalid operator\n"); return 0;
    }
}

int main() {
    char s[20];   // Array to store the postfix expression
    int i;        // Iterator
    int top = -1; // Initialize top of the stack
    int stk[50];  // Stack to hold operands

    // Read the postfix expression
    printf("Enter the postfix expression: ");
    scanf("%s", s);

    // Iterate through each character of the string
    for (i = 0; s[i]; i++) {
        // Check if the character is a digit
        if ('0' <= s[i] && s[i] <= '9') {
            stk[++top] = s[i] - '0'; // Convert char to integer and push to stack
        } else {
            // Pop two operands from the stack and evaluate the operation
            int a = stk[top--];
            int b = stk[top--];
            stk[++top] = value(s[i], a, b);  // Push the result back to the stack
        }
    }

    // The result of the postfix expression is at the top of the stack
    printf("Result: %d\n", stk[top]);
    return 0;
}

