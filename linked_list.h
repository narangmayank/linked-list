#ifndef LINKEDLIST_DS_H
#define LINKEDLIST_DS_H

#include <stdio.h>
#include <stdlib.h>

// Macro to prevail max retries that user can have
#define MAX_RETRIES 3

// Macro to get the status of linked list 
#define ERROR_LIST_NOT_FOUND -2

/* Macro's to get the status of linked list 
#define LIST_ERROR   -1
#define LIST_SUCCESS -2
#define ERROR_LIST_NOT_FOUND -3        
* for future refrence only */

/* union of our boolean (true & false) */
typedef enum {
    false,
    true,
} bool;

/* Structure of our node (how node looks like) */
struct dummyNode{               
    int data;                                      // data part as an integer
    struct dummyNode * ptrToNextNode;              // link part as an Node * to hold address of node
};

typedef struct dummyNode Node;                     // typedef to make things easier for us

/* Input Output fun() */
void scanfPlusPlus(int *);                           
void printfPlusPlus(char *);

void createLinkedList(Node **);               // creating  linked list
void deleteLinkedList(Node **);               // deleting  linked list

void printLinkedList(Node **);                // printing  linked list
void reverseLinkedList(Node **);              // reversing linked list

int getLinkedListLength(Node **);             // get length of the linked list
int searchDataInLinkedList(Node **);          // search an element in the linked list

/* This is the main feature of linked list that we can extend or shrink it according
 * to our requirement
 */
void addNode(Node **);                        // add a new node to linked list
void removeNode(Node **);                     // remove a existing node from linked list

extern bool is_list_there;

#endif 
