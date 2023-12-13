#define MAX 100
#include <stdio.h>

struct Stack
{
    int top;
    int arr[MAX];
};

int push(struct Stack *stack, int num)
{
    if (stack->top == MAX - 1)
    {
        printf("The stack is full.");
        return 0;
    }
    stack->top++;
    stack->arr[stack->top] = num;
}

int pop(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf("the stack is empty.");
        return 0;
    }
    return stack->arr[stack->top--];
}

int main()
{
    struct Stack stack;
    stack.top = -1;
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    printf("%d", pop(&stack));
    for (int i = 0; i <= stack.top; i++)
    {
        printf("%d", stack.arr[i]);
    }
    return 0;
}