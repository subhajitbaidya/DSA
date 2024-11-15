#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    for(int i = 1; i < argc; i++){
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));
        if(n!=NULL){
            free(n);
            printf("No number to input");
            return 1;
        }
        // logic for prepending numbers in linked list
        n->number = number;
        n->next = list;
        list = n;
    }

    // printing list
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i", ptr->number);
        ptr = ptr->next;
    }
}