#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int number;
    struct Node *next;
} Node;

Node *createNode(int x);
Node *concat(Node *head1, Node *head2);
void printlist(Node *head);

int main(void)
{

    // Creating nodes of linkedlist
    Node *head1 = createNode(3);
    head1->next = createNode(4);
    head1->next->next = createNode(5);


    // Creating second linkedlist
    Node *head2= createNode(6);
    head2->next = createNode(7);


    //Concatinating two linkedlists
    Node *concatHead = concat(head1, head2);
    printlist(concatHead);
}

Node *createNode(int x)
{
    Node *new = malloc(sizeof(Node));
    new->number = x;
    new->next = NULL;
    return new;
}

Node *concat(Node *head1, Node *head2)
{

    // Base case if the first list is empty
    if (head1 == NULL)
    {
        return head2;
    }

    Node *current = head1;
    while (current->next != NULL)
    {
        current = current->next;
    }

    // Setting the last node of first list to head of second list
    current->next = head2;

    return head1;
}

void printlist(Node *head)
{
    Node *curr = head;
    while (curr!=NULL)
    {
        printf("%d ", curr->number);
        curr = curr->next;
    }
    printf("\n");
    
}
