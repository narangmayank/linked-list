#include<stdio.h>             // Standard IO Header file      
#include"linkedList.h"        // Header for linkedList data structure

int main() {
    /* Driver code starts */
    showIdentity();                       // what you can do ?
    
    /* This fun() call will ask you for number of node you want to start with 
     * along with the data corresponding to each node
     */
    createLinkedList();             
    
    printLinkedList(head);                // print linked list
    reverseLinkedList(head);              // reverse linked list
    printLinkedList(head);                // print linked list

    printf("Length of linked list is : %d\n",getLinkedListLength(head));

    /* This is the main feature of the linked list , that we can extend it
     * at the run time according to our requirement 
     */
    addNode(head);    

    printf("Length of linked list is : %d\n",getLinkedListLength(head));
    printLinkedList(head);                // print linked list

    /* This is the main feature of the linked list , that we can shrink it
     * at the run time according to our requirement 
     */
    removeNode(head);
    
    printf("Length of linked list is : %d\n",getLinkedListLength(head));
    printLinkedList(head);
    return 0;
}