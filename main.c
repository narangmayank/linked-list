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
    
    return 0;
}