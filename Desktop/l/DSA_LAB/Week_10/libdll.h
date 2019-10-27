#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
   int data;

	
   struct Node *next;
   struct Node *prev;
}node;
node *head = NULL;
node *last = NULL;
node *current = NULL;
bool isEmpty() {
   return head == NULL;
}

void display() {
    node *ptr = head;
   printf("\n[ ");
   while(ptr != NULL) {        
      printf("(%d) ",ptr->data);
      ptr = ptr->next;
   }
	
   printf(" ]");
}
/*void displayBackward() {
   struct node *ptr = last;
   printf("\n[ ");
   while(ptr != NULL) {    
      printf("(%d,%d) ",ptr->key,ptr->data);
      ptr = ptr ->prev;  
   }	
}*/
void insertFirst(int data) {

    node *link = (node*) malloc(sizeof(struct Node));
   link->data = data;
	
   if(isEmpty()) {
      last = link;
   } else {
      head->prev = link;
   }
   link->next = head;
   head = link;
}
void insertLast(int data) {
   node *link = (node*) malloc(sizeof(struct Node));
   link->data = data;
	
   if(isEmpty()) {
      last = link;
   } else {
      last->next = link;     
      link->prev = last;
   }
   last = link;
}
node* deleteFirst() {
   node *tempLink = head;
   if(head->next == NULL){
      last = NULL;
   } else {
      head->next->prev = NULL;
   }
	
   head = head->next;
   return tempLink;
}
node* deleteLast() {
    node *tempLink = last;
   if(head->next == NULL) {
      head = NULL;
   } else {
      last->prev->next = NULL;
   }
   last = last->prev;
   return tempLink;
}
