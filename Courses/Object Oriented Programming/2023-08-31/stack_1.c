#define MAX_SIZE 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stack
{
    char words[MAX_SIZE][50];
    int top;
};

void push(struct Stack *stack, const char *word)
{
    if (stack->top == MAX_SIZE - 1)
    {
        printf("\nStack is full");
        return;
    }
    stack->top++;
    strcpy(stack->words[stack->top], word);
}

char *pop(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf("\nStack is Empty");
        return NULL;
    }
    return stack->words[stack->top--];
}

void removeMiddleWord(struct Stack *stack)
{
    int middle = (stack->top + 1) / 2;
    struct Stack tempstack;
    tempstack.top = 1;
    // pussh words into tempstack untill middle is reached
    for (int i = 0; i < middle; i++)
    {
        push(&tempstack, pop(stack));
    }
    // remove middle element
    pop(stack);
    // push result into original stack
    while (tempstack.top != 1)
    {
        push(stack, pop(&tempstack));
    }
}

int main()
{
    struct Stack stack;
    stack.top = -1;
    push(&stack, "Hello");
    push(&stack, "How");
    push(&stack, "Are");
    printf("\nOriginal Stack Values: ");
    for (int i = 0; i <= stack.top; i++)
    {
        printf("%s ", stack.words[i]);
    }
    removeMiddleWord(&stack);
    printf("\nAfter Removing Middle Word from Stack Values: ");
    for (int i = 0; i <= stack.top; i++)
    {
        printf("%s ", stack.words[i]);
    }
    printf("\n");
    return 0;
}