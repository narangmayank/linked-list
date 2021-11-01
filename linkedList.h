#ifndef LINKEDLIST_DS_H
#define LINKEDLIST_DS_H

#include<stdio.h>                      // Standard IO Header file 
#include<stdlib.h>                     // Library for dynamic memory allocation

#define MAX_RETRIES 3                  // Macro to prevail max retries that user can have
#define ERROR_LIST_NOT_FOUND -2        // Macro to get the status of linked list 

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

void showIdentity();                         // show menu options

void createLinkedList();                     // creating  linked list
void deleteLinkedList(Node *);               // deleting  linked list

void printLinkedList(Node *);                // printing  linked list
void reverseLinkedList(Node *);              // reversing linked list

int getLinkedListLength(Node *);             // calculate length of linked list
int searchDataInLinkedList(Node *);          // search an element in the linked list

/* This is the main feature of linked list that we can extend or shrink it according
 * to our requirement
 */
void addNode(Node *);                        // add a new node to linked list
void removeNode(Node *);                     // remove a existing node from linked list

#endif 
