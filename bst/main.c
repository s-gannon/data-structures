#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
	int data;
	node* left;
	node* right;
} node;

typedef struct{
	node* root;
} bst;

bool search(bst* tree, node* current, int key){
	if(tree->root == NULL)		//if the root is null, there's no data in this tree
		return false;

	if(current->data != key && current->left == NULL && current->right == NULL)
		return false;

	if(current->data == key)	//if data == key, we found the value in the tree
		return true;
	else if(key < current->data)//go down the left branch if key < data in node
		search(current->left, key);
	else						//go down the right branch if key > data in node
		search(current->right, key);

}

int main(int argc, char** argv){

}
