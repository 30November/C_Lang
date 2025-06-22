#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to determine the precedence of operators
int precedence(char op) {
    switch (op) {
        case '-': return 1;
        case '+': return 1;
        case '*': return 3;
        case '/': return 4;
        case '^': return 5;
        default: return 0;
    }
}

// Stack structure
typedef struct {
    char data[100];
    int top;
} Stack;

// Stack operations
void push(Stack *stk, char ch) {
    stk->data[++(stk->top)] = ch;
}

char pop(Stack *stk) {
    return stk->data[(stk->top)--];
}

char peek(Stack *stk) {
    return stk->data[stk->top];
}

int isEmpty(Stack *stk) {
    return stk->top == -1;
}

// Function to convert infix expression to postfix
void infixToPostfix(char* Q, char* result) {
    Stack stk;
    stk.top = -1;
    push(&stk, '(');  // Initialize stack with '('
    strcat(Q, ")");   // Append ')' to the expression
    
    int len = strlen(Q);
    int i,j = 0;
	
    for (i = 0; i < len; i++) {
        char ch = Q[i];
        
        if (ch == '(') {
            push(&stk, ch);
        } else if (ch == '^' || ch == '/' || ch == '*' || ch == '+' || ch == '-') {
            while (precedence(peek(&stk)) >= precedence(ch)) {
                result[j++] = pop(&stk);
            }
            push(&stk, ch);
        } else if (ch == ')') {
            while (peek(&stk) != '(') {
                result[j++] = pop(&stk);
            }
            pop(&stk); // Remove the '(' from stack
        } else {
            result[j++] = ch; // If it's an operand, add to result
        }
    }
    
    result[j] = '\0'; // Null-terminate the result string
}

// Main function to test the code
int main() {
    char Q[100];
    char result[100];

    printf("Expression: ");
    scanf("%s", Q);

    infixToPostfix(Q, result);

    printf("Postfix: %s\n", result);

    return 0;
}

