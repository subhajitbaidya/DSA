<span style="color:yellow">Data Structures and Algorithms</span>

🚀 **Arrays**

1.  **Find whether an array is subset of another array->/Arrays/subset.py**
      Given two arrays arr1[] and arr2[] of size m and n respectively,  
      the task is to determine whether arr2[] is a subset of arr1[].  
      Both arrays are not sorted, and elements are distinct.




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

2. **Concating two linked lists**  
     Creating 3 functions `Node *concat(Node *head1, Node *head2)`, `void printlist(Node *head)` and `Node *createNode(int x)`.   
     `createNode` will create each node of linked list.  
     `concat` function traverses through the first linked list and find the end node and points it to the head of second linked list.  
     `printlist` prints the result list. 


🚀 **Stacks**

1. **Implementing Stack using Array**
     To be completed

2. **Implementing Stack using Linked List**
     To be completed



