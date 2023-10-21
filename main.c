#include <stdio.h>  
#include "linked_list.h"

/* boolean to check if list is there ot not , if it is there we don't let user 
 * to make another instance of it unless they delete the previous one
 */
bool is_list_there = false;

void showIdentity() {
    /* head of our linked list (it points to first node and that is what we
     * have in order to operate linked list data structure 
     */
    Node * head = NULL;

    int userChoice = 0;              // hold choice of user
    int returnValue = 0;             // used to hold the return value of search fun() and length fun()

    /* Print info about itself (consider menu) */
    printfPlusPlus("Hey there, I am an instance of linkedList data strcuture.");
    printfPlusPlus("Happy Usage !!\n");

    printfPlusPlus("*************************Menu****************************");
    printfPlusPlus("1 : create linked list");
    printfPlusPlus("2 : get length of linked list");
    printfPlusPlus("3 : search an element in linked list");
    printfPlusPlus("4 : add a node in linked list");
    printfPlusPlus("5 : remove a node from linked list");
    printfPlusPlus("6 : print linked list");
    printfPlusPlus("7 : reverse linked list");
    printfPlusPlus("8 : delete linked list");
    printfPlusPlus("9 : exit program");
    printfPlusPlus("*************************Menu****************************\n");

    do {
        /* ask for choice and process it according to the menu */
        userChoice = 0;                                 
        printf("Please enter your choice : ");
        scanfPlusPlus(&userChoice);
        
        /* If user enter other than choice , give him info about that and reset the choice variable */
        if(userChoice < 1 || userChoice > 9) {
            userChoice = 0;
        }
        
        /* based on user choice , swicth to desired fun() */
        switch(userChoice) {
            case 0:
                /* tell user to enter option from menu only */
                printfPlusPlus("Please choose from the menu !!");
                break;
            case 1:
                /* This fun() call will ask you for number of node you want to start with 
                * along with the data corresponding to each node
                */
                if(is_list_there) {
                    printfPlusPlus("You have already created the list , delete it to create a new one !!");
                }
                else {
                    createLinkedList(&head);
                }
                break;
            case 2:
                /* call the getLinkedListLength fun () and check for return value , if it 
                * is valid then display the length to the user 
                */
                returnValue = getLinkedListLength(&head);
                if(returnValue != ERROR_LIST_NOT_FOUND) {
                    printf("Length of linked list is : %d\n",returnValue);
                }
                break;
            case 3:
                /* call the searchdataInLinkedList fun () and check for return value , if it 
                * is valid then display the index of that element to user
                */
                returnValue = searchDataInLinkedList(&head);
                if(returnValue != ERROR_LIST_NOT_FOUND) {
                    if(returnValue == -1) {
                        printfPlusPlus("Element is not there in the linked list , check by printing the linked list");
                    }
                    else {
                        printf("Element index is : %d\n",returnValue);
                    }
                }
                break;
            case 4:
                /* This is the main feature of the linked list , that we can extend it
                * at the run time according to our requirement 
                */
                addNode(&head);
                break;
            case 5:
                /* This is the main feature of the linked list , that we can shrink it
                * at the run time according to our requirement 
                */
                removeNode(&head);
                break;
            case 6:
                /* print linked list */
                printLinkedList(&head);
                break;
            case 7:
                /* reverse linked list */ 
                reverseLinkedList(&head);
                break;
            case 8:
                /* delete linked list */
                if(!is_list_there) {
                    printfPlusPlus("You have not created the linked list yet , create one to delete");
                }
                else {
                    deleteLinkedList(&head);
                }
                break;
            case 9:
                /* It's time to say good bye to user */
                printfPlusPlus("Thank you for using me, Bye.");
                break;
            default:
                /* make sure this will not happen in any case */
                printfPlusPlus("Unexpected thing happens !!");
                break;
        }
    }
    while(userChoice != 9);                 // keep going until user don't want to close (see menu)
}

int main() {

    /* Driver code starts */

    // what you can do ? (that sit)
    showIdentity();
    
    /* Driver code ends */

    return 0;                                  
}