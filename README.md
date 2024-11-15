<span style="color:yellow">Data Structures and Algorithms</span>

🚀 **Linked Lists**

1.  **Prepending a linked list -> ll.c**  
     Inserting a node each time on the beginning of the list.  
     Create a data type using struct named node  
     main()  
     create an empty `node *list(pointer)` which is initialized to NULL in order to avoid it from pointing to any random garbage value.  
     Using a for loop to traverse through the number of inputs getting received.  
     Making sure that the input we are receiving is in integer data type.  
     Initializing another temporary `node \*n` in order to allocate space for the node to be added in the linked list using `malloc(sizeof(node))`.  
     Checking if `n` is `NULL`:  
     `return 1` to exit the program.
     `n` points to the new node to be inserted.  
     `n->number = number` is to go in the `struct node` and assign the number that we are getting from CLI or user. 
     `n->next = list` is the `struct node *next;` part of the typedef which is again a pointer is being instructed to point at the address of the initial `list`.  
     Now we are doing `list = n` to point the original list to the new inserted node.  

     Now we create another `node *ptr = list` for printing numbers in the linked list.  
     We check `while(ptr! = NULL)` and then print the numbers by `ptr->number` and set `ptr = ptr->next` in order to increment it to the next node.  
