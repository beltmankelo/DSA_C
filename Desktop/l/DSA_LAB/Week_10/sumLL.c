#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 25
typedef enum { NO, YES } BOOL;
typedef struct Node {
	int value;
	struct Node * next;
	struct Node * prev;
} NODE_t;
typedef NODE_t * NODE;
NODE get () {
	NODE temp = (NODE)malloc(sizeof(NODE_t));
	temp->value = 0;
	temp->prev = temp;
	temp->next = temp;
	return temp;
}
void insert (NODE list, int val) {
	NODE temp = get();
	NODE p = list->next;
	temp->value = val;
	temp->next = p;
	temp->prev = list;
	list->next = temp;
	p->prev = temp;
	(list->value)++;
}
void inputLongInteger (NODE li) {
	int i;
	char * longint = (char *)malloc(SIZE * sizeof(char));
	scanf(" %s", longint);
	for (i = (int)strlen(longint) - 1; i >= 0; --i)
		insert(li, *(longint + i) - '0');
}
NODE cAILInt () {
	NODE li = get();
	inputLongInteger(li);
	return li;
}
NODE addLongInt (NODE lia, NODE lib) {
	NODE lic = get();
	int carry = 0, sum = 0;
	NODE tempa = lia->prev;
	NODE tempb = lib->prev;
	while (tempa != lia && tempb != lib) {
		sum = tempa->value + tempb->value + carry;
		carry = sum / 10;
		sum = sum % 10;
		insert(lic, sum);
		tempa = tempa->prev;
		tempb = tempb->prev;
	}
	while (tempa != lia) {
		sum = tempa->value + carry;
		carry = sum / 10;
		sum = sum % 10;
		insert(lic, sum);
		tempa = tempa->prev;
	}
	while (tempb != lib) {
		sum = tempb->value + carry;
		carry = sum / 10;
		sum = sum % 10;
		insert(lic, sum);
		tempb = tempb->prev;
	}
	if (carry != 0)
		insert(lic, carry);
	return lic;
}
void disp(NODE longInteger, int maxSize) {
	int size;
	for (size = maxSize; size > longInteger->value; --size)
	printf("  ");
	NODE temp = longInteger->next;
	while (temp != longInteger) {
		printf("%d ", temp->value);
		temp = temp->next;
	}
}
int max (int a, int b, int c) {
	return (a>b?((a>c)?a:c):(b>c)?b:c);
}
int main (int argc, const char * argv []) {
	printf("Enter A: ");
	NODE lia = cAILInt();
	printf("\nEnter B: ");
	NODE lib = cAILInt();
	NODE lic = addLongInt(lia, lib);
	int maxSize = max(lia->value, lib->value, lic->value);
	printf("\n A =   ");
	disp(lia, maxSize);
	printf("\n B = + ");
	disp(lib, maxSize);
	printf("\nA + B =   ");
	disp(lic, maxSize);
	return 0;
}

