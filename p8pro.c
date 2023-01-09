#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node* top = NULL;

void push(int v) {
    struct Node *N1;
    N1 = (struct Node *)malloc(sizeof(struct Node));
    N1->data = v;
    if (top == NULL) {
        N1->next = NULL;
    } else {
        N1->next = top;
    }
    top = N1;
    printf("Node is Inserted\n\n");
}

int pop() {
    if (top == NULL) {
        printf("\nStack Underflow\n");
    } else {
        struct Node *temp = top;
        int D1 = top->data;
        top = top->next;
        free(temp);
        return D1;
    }
}

void display() {
    if (top == NULL) {
        printf("\nStack Underflow\n");
    } else {
        printf("The stack is \n");
        struct Node *temp = top;
        while (temp->next != NULL) {
            printf("%d--", temp->data);
            temp = temp->next;
        }
        printf("%d\n\n", temp->data);
    }
}

int main() {
    int x, v;
    printf("\nLinked stack\n");
    while (1) {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &x);
        switch (x) {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &v);
            push(v);
            break;
        case 2:
            printf("Popped element is :%d\n", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}
