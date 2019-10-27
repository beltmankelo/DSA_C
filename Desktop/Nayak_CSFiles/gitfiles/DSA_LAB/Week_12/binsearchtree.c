#include<stdio.h>
#include<stdio.h> 
#include<stdlib.h> 

typedef struct node 
{ 
	int key; 
	struct node *left, *right; 
}* NODE; 
 
NODE newNode(int item) 
{ 
	NODE temp = (NODE )malloc(sizeof(struct node)); 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 


void inorder(NODE root) 
{ 
	if (root != NULL) 
	{ 
		inorder(root->left); 
		printf("%d ", root->key); 
		inorder(root->right); 
	} 
} 

NODE insert(NODE node, int key) 
{ 

	if (node == NULL) return newNode(key); 
	if (key < node->key) 
		node->left = insert(node->left, key); 
	else
		node->right = insert(node->right, key); 
	return node; 
} 
NODE  max(NODE node) 
{ 
	NODE current = node; 
	while (current && current->right != NULL) 
		current = current->right; 

	return current; 
} 


NODE deleteNode(NODE root, int key) 
{  
	if (root == NULL) return root; 


	if (key < root->key) 
		root->left = deleteNode(root->left, key); 
 
	else if (key > root->key) 
		root->right = deleteNode(root->right, key); 

	else
	{  
		if (root->left == NULL) 
		{ 
			NODE temp = root->right; 
			free(root); 
			return temp; 
		} 
		else if (root->right == NULL) 
		{ 
			NODE temp = root->left; 
			free(root); 
			return temp; 
		} 
 
		NODE temp = max(root->left); 
 
		root->key = temp->key; 
 
		root->right = deleteNode(root->right, temp->key); 
	} 
	return root; 
} 
NODE inOrderSuccessor(NODE root, NODE n) 
{   
  if( n->left != NULL ) 
    return max(n->right); 
  NODE p = n->parent; 
  while(p != NULL && n == p->left) 
  { 
     n = p; 
     p = p->parent; 
  } 
  return p; 
} 
void main() 
{ 
	NODE root = NULL; 
	root = insert(root, 50); 
	root = insert(root, 30); 
	root = insert(root, 20); 
	root = insert(root, 40); 
	root = insert(root, 70); 
	root = insert(root, 60); 
	root = insert(root, 80); 
	NODE temp,succ;
	temp=root->left->right->right;
	succ=inOrderSuccessor(root,temp);
	printf("%d\n",temp->data );
	printf("Inorder: \n"); 
	inorder(root); 

	printf("\nDeleting 20\n"); 
	root = deleteNode(root, 20);  
	inorder(root); 

	printf("\nDeleting 30\n"); 
	root = deleteNode(root, 30); 
	inorder(root); 

	printf("\nDeleting 50\n"); 
	root = deleteNode(root, 50);  
	inorder(root);  
	printf("\n");
} 
