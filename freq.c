#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char s;
    int freq;
    struct node *next;
} NODE;

NODE *head = NULL;

void frequency(char str) {
    NODE *p = head;
    NODE *prev = NULL;

    while (p && p->s != str) {
        prev = p;
        p = p->next;
    }

    if (p) {
        // Character found, increment frequency
        p->freq++;
    } else {
        // Character not found, create a new node
        NODE *temp = (NODE *)malloc(sizeof(NODE));
        temp->s = str;
        temp->freq = 1;
        temp->next = NULL;

        if (prev) {
            // Link the new node to the end of the list
            prev->next = temp;
        } else {
            // This is the first node in the list
            head = temp;
        }
    }
}

void display() {
    NODE *p = head;
    while (p) {
        printf("\n%c: %d", p->s, p->freq);
        p = p->next;
    }
}

int main() {
    char s[10] = {'a', 'a', 'a', 'b', 'c', 'd', 'b', 'b', 'e', 'f'};
    int i;
	for (i = 0; i < 10; i++) frequency(s[i]);

    display();
    return 0;
}

