#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

typedef struct Stacknode
{
    int number;
    struct Stacknode *next;
} Stacknode;

Stacknode *newNode(int data)
{
    Stacknode *stacknode = (Stacknode *)malloc(sizeof(Stacknode));
    stacknode->number = data;
    stacknode->next = NULL;
    return stacknode;
}

int isEmpty(Stacknode *root)
{
    return !root;
}

void push(Stacknode **root, int data)
{
    Stacknode *node = newNode(data);
    node->next = *root;
    *root = node;
    printf("%i pushed to stack \n", data);
}

int pop(Stacknode **root)
{
    if (isEmpty(*root))
    {
        return INT_MIN;
    }
    Stacknode *temp = *root;
    *root = (*root)->next;
    int popped = temp->number;

    return popped;
}

int peek(Stacknode *root)
{
    if (isEmpty(root))
    {
        return INT_MIN;
    }
    return root->number;
}

int main(void)
{
    Stacknode *node = NULL;
    push(&node, 30);
    push(&node, 40);
    push(&node, 50);
    push(&node, 60);

    printf("%i popped from stack \n", pop(&node));
    printf("%i is top element of stack \n", peek(node));
    return 0;
}