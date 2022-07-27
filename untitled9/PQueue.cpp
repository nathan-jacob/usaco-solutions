/*
 * LaQueue
 *
 *
 * This is part of a series of labs for the Liberal Arts and Science Academy.
 * The series of labs provides a mockup of an POSIX Operating System
 * referred to as LA(SA)nix or LAnix.
 *
 * (c) copyright 2018, James Shockey - all rights reserved
 *
 * */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PQueue.h"



/*
 * Class Priority Queue
 */


/*
* Insert into Priority Queue
*/
void PQueue::push(void *item, int priority)
{
//    struct node *ne;
//    ne = (node *) malloc(sizeof(node));
//    ne->data = item;
//    ne->priority = priority;
//    if (front == NULL) {
//        ne->link = NULL;
//        front = ne;
//    }
//    else if (front->link == NULL) {
//        if (front->priority >= ne->priority) {
//            front->link = ne;
//            ne->link = NULL;
//        }
//        else {
//            ne->link = front;
//            front->link = NULL;
//            front = ne;
//        }
//    }
//    else {
//        struct node *nex;
//        struct node *prev;
//        nex = (node *) malloc(sizeof(node));
//        nex = front->link;
//        prev = (node *) malloc(sizeof(node));
//        prev = front;
//
//        while (nex->link != NULL) {
//            if (nex->priority < ne->priority) {
//                prev->link = ne;
//                ne->link = nex;
//                break;
//            }
//            else {
//                prev = nex;
//                nex = nex->link;
//            }
//        }
//
//
//    }
    node *tmp,*q;

    tmp = (node *)malloc(sizeof(node));
    tmp->data = item;
    tmp->priority = priority;
    /*Queue is empty or item to be added has priority more than first item*/
    if( front == NULL || priority < front->priority )
    {
        tmp->link = front;
        front = tmp;
    }
    else
    {
        q = front;
        while( q->link != NULL && q->link->priority <= priority )
            q=q->link;
        tmp->link = q->link;
    }
        q->link = tmp;
    }

/*
 * Delete from Priority Queue
 */
char PQueue::top()
{
    /* Your code here */
    char what;
    typedef decltype(what) myType;
    myType p = *((myType*) front->data);

    return (p);
}
/*
 * Delete from Priority Queue
 */
void PQueue::pop()
{
    front = front->link;
}

/*
 * Print Priority Queue
 */
void PQueue::display()
{

    /* Your code here */

    /* Use the following out command for the data */
    if (front != NULL) {
        struct node *ptr;
        ptr = (node *) malloc(sizeof(node));
        ptr = front;
        std::cout<<ptr->priority<<" "<<(char*)ptr->data<<std::endl;
        while (ptr->link != NULL) {
            ptr = front->link;
            std::cout<<ptr->priority<<" "<<(char*)ptr->data<<std::endl;
        }
    }




}
