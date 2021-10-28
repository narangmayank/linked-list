#ifndef LINKEDLIST_DS_H
#define LINKEDLIST_DS_H

#include<stdio.h>
#include<stdlib.h>

#define MAX_RETRIES 3

struct dummyNode{
    int data;
    struct dummyNode * ptrToNextNode;
};

typedef struct dummyNode Node;

Node * head;


void scanfPlusPlus(int *);
void printfPlusPlus(char *);

void showIdentity();
void createLinkedList();
void printLinkedList(Node *);
void reverseLinkedList(Node *);
int getLinkedListLength(Node *);

void addNode(Node *);
void removeNode(Node *);
#endif 
