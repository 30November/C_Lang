#include <stdio.h>
#include <stdlib.h>
//QUEUE USING LINKED LIST
struct Node{
    int data;
    struct Node * next;
};

struct Node * f = NULL;
struct Node * r = NULL;

void enqueue(){
    struct Node * temp = malloc(sizeof(struct Node));
    int data; scanf("%d",&data,printf("Enter the item:"));
    temp->data = data;
    temp->next = NULL;
    if (r == NULL && f==NULL) //first time making node
        f = r = temp;
    else{
        r->next = temp;
        r = temp;
    }
}

void dequeue(){
    if (f == NULL){
        printf("NO ELEMENT");
    }
    else if (f == r && f->next == NULL){
        printf("DEQUEUED = %d\n",f->data);
        free(f);
        f = r = NULL;
    }
    else{
        struct Node * ptr = f;
        f = f->next;
        printf("DEQUEUED = %d\n",ptr->data);
        free(ptr);
    }
}

void qprinter(){
    struct Node * i = f;
    if (i == NULL){
        printf("NO ELEMENT\n");
    }
    else{
        while(i != NULL){
            printf("%d ",i->data);
            i = i->next;
        }
    }
}

main(){
    int op;
    label:
    printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit");
    scanf("%d",&op,printf("-> "));
    if (op == 1) enqueue();
    else if (op == 2) dequeue();
    else if(op == 3) qprinter();
    else if (op == 4) return;
    goto label;

}
