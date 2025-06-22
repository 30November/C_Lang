#include <stdio.h>

int top = -1;
int stack[100];

void push(int stack[]) {
	if (top==100) printf("Overflow"); return;
    int item;
    scanf("%d", &item,printf("Enter the item to insert: "));
    stack[++top] = item;
}

void pop(int stack[]) {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        int dl = stack[top--];
        printf("Popped item: %d\n", dl);
    }
}

void display(int stack[]) {
    int i = top;
    printf("Stack contents: ");
    while (i >= 0) {
        printf("%d ", stack[i--]);
    }
    printf("\n");
}

int main() {
    while (1) {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Stop\n");
        int op;
        scanf("%d", &op);

        if (op == 1) {
            push(stack);
        } else if (op == 2) {
            pop(stack);
        } else if (op == 3) {
            display(stack);
        } else {
            break;
        }
        printf("\n");
    }

    return 0;
}

