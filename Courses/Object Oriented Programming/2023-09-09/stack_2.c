#define MAX 100
#include <stdio.h>

struct Stack
{
    int top;
    char arr[MAX];
};

int push(struct Stack *stack, char letter)
{
    if (stack->top == MAX - 1)
    {
        printf("The stack is full.");
        return 0;
    }
    stack->top++;
    stack->arr[stack->top] = letter;
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
    push(&stack, 'A');
    push(&stack, 'B');
    push(&stack, 'C');
    push(&stack, 'D');
    printf("%c", pop(&stack));
    for (int i = 0; i <= stack.top; i++)
    {
        printf("%c", stack.arr[i]);
    }
    return 0;
}