#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
	void* data;	//generic nodes for the win
	node* left;
	node* right;
} node;

typedef struct{
	node* root;
} bst;

bool search(bst* tree, node* current, void* key){
	if(tree->root == NULL)		//if the root is null, there's no data in this tree
		return false;			//you're not gonna find anything in here

	if(current->data != key && current->left == NULL && current->right == NULL)
		return false;
	//if data and key are equivalent, we found the value in the tree
	if(current->data == key)
		return true;
	else if(key < current->data)//go down the left branch if key < data in node
		search(current->left, key);
	else						//go down the right branch if key > data in node
		search(current->right, key);

}

int main(int argc, char** argv){

}
