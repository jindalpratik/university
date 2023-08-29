#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    //check for stack is full or not
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
    printf("Element %d pushed to the stack\n", value);
}

void pop() {
    //check for stack empty or not
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Element %d popped from the stack\n", stack[top--]);
}

void display() {
    //if top==-1 stack gets empty
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}