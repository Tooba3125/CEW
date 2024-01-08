main.c
 
struct Node
{
int data;
struct Node *next;
 
#include <stdio.h> #include "linked_list.h"

int main(){
struct Node *head = createNode(5); insert(head, 4);
insert(head, 3);
printList(head);
head = deleteNode(head, 5); printList(head);
struct Node *head2 = searchNode(head, 2); printList(head2);
freeList(head2); return 0;
}

linked_list.h

#ifndef LINKED_LIST_h #define LINKED_LIST_h
struct Node *createNode (int data);struct Node *insert (struct Node
*head, int data);
struct Node *deleteNode (structNode *head, int data);
struct Node *searchNode (structNode *head, int data);
void printList (struct Node *head); void freeList (struct Node *head); #endif

linked_list.c

#include "linked_list.h" #include <stdlib.h> #include
<stdio.h>
 
};

struct Node *createNode (int data)
{
struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));newNode->data = data;
newNode->next = NULL; return newNode;
}

struct Node *insert (struct Node
*head, int data)
{
struct Node *newNode = createNode (data);
if (head == NULL)
{
return newNode;
}
struct Node *current = head; while (current->next != NULL)
{
current = current->next;
}
current->next = newNode; return head;
}


struct Node *deleteNode (structNode *head, int data)
{
struct Node *current = head;struct Node *prev = NULL;
while (current != NULL && current-
>data != data)
{
 
prev = current;
current = current->next;
 
}
