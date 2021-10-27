#include "linkedList.h"                        // Header for linkedList data structure

void scanfPlusPlus(int * elementAddress) {
    scanf("%d",elementAddress);                // Take integer from standard input
    while ((getchar()) != '\n');               // Flush the standard input buffer
 }

 void printfPlusPlus(char * printMessage) {
    printf(printMessage);                      // Print Message to  standard output
    printf("\n");                              // Change to new line
 }

 void showIdentity() {
    /* Print info about itself */
    printfPlusPlus("Hey there, I am an instance of linkedList data strcuture.");
    printfPlusPlus("Happy Usage !!");
 }

 void createLinkedList() {
    int tryCount = 0;                       // count to hold number of retries by the user
    int numNodes = 0;                       // how many nodes user want ?
    int dataSet[10] = {};                   // hold values that user will give after entering number of nodes
    
    do {
       /* If max retries limit reached , print info about it and return */
       if(tryCount == MAX_RETRIES) {                    
          printfPlusPlus("Sorry bro, Hard Luck !!"); 
          return;
       }
       
       tryCount++;                                                // Take hold of try count
       printf("%d :: How many nodes you want : ",tryCount);       // Ask input from user --> number of nodes
       scanfPlusPlus(&numNodes);                                 
    } 
    /* Number of nodes should be in between 1 to 10 in starting there afterwards they can extend it or shrink
     * according to their convinience , that's what the use case of linked list */
    while (numNodes <= 0 || numNodes > 10);                    
    
    /* Take data elements from standard input and store it into one buffer */
    printfPlusPlus(":: Enter node data values one by one , consider space as termination ::");
    for(int i=0; i<numNodes; i++) {
       scanf("%d",&dataSet[i]);
    }

    /* Create first node and give it's refrence to head pointer */
    head = (Node *)malloc(sizeof(Node));          // head --> Fisrt node
    head -> data = dataSet[0];                    // Fill the data element
    head -> ptrToNextNode = NULL;                 // Make link field as NULL

    /* It hold the refrence of previous node , that's how we are able to make links between previous node
     * and current node , PS : Dont't forgot to update the refrence of previous node to current node after
     * the link is established */
    Node *  prevNodePtr = head;       

    for(int i=1; i<numNodes; i++) {

       /* Create a new node and give its refrence to link field of previous node */
       prevNodePtr -> ptrToNextNode = (Node *)malloc(sizeof(Node));      // Give refrence to previous node  
       prevNodePtr = prevNodePtr -> ptrToNextNode;                       // Make it previous node
 
       prevNodePtr -> data = dataSet[i];                                 // Fill the data element 
       prevNodePtr -> ptrToNextNode = NULL;                              // Make link field as NULL 
    }
 }

 /* Function to print the linked list , only data part 
  * @details : It will take only head of linked list as an argument (Call by value only)
  */
 void printLinkedList(Node * ptrToFirstNode) {
    printf("Linked List ----> [ ");

    /* Move through out the linked list, until you not met NULL in the node link field */
    while(ptrToFirstNode != NULL) {                                       
       printf("%d ",ptrToFirstNode -> data);                 // print the data of node pointed by the pointer
       ptrToFirstNode = ptrToFirstNode -> ptrToNextNode;     // point to next node in the linked list using node link field
    }
    printf("]\n");
 }