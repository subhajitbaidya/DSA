#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

// imrplementing stack
typedef struct Stack
{
    int top;
    unsigned capacity;
    int *array;
} Stack;

Stack *createStack(unsigned capacity);
int isFull(Stack *stack);
int isEmpty(Stack *stack);
void push(Stack *stack, int item);
int pop(Stack *stack);
int peek(Stack *stack);

Stack *createStack(unsigned capacity)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

void push(Stack *stack, int item)
{
    if (isFull(stack))
    {
        return;
    }

    stack->array[++stack->top] = item;
    printf("%i pushed to stack \n", item);
}

int pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        return INT_MIN;
    }
    return stack->array[stack->top--];
}

int peek(Stack *stack)
{
    if (isEmpty(stack))
    {
        return INT_MIN;
    }
    return stack->array[stack->top];
}

int main(){
    Stack *stack = createStack(50);
    push(stack, 10);
    push(stack, 20);
    push(stack, 50);

    printf("%i popped from stack \n", pop(stack));
    printf("%i is the top element \n", peek(stack));
}