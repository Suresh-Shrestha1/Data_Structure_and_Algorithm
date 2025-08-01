//Write a program to check BST using given set of node & implements tree traversal methods (preorder, inorder, postorder).

#include<stdio.h>
#include<stdlib.h>

//define the node
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

//create anew node
struct Node* createNode(int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

//insert a node in BST
struct Node* insert(struct Node* root, int data){
	if(root == NULL){
		return createNode(data);
	}
	if(data < root->data){
		root->left = insert(root->left, data);
	}
	else if(data > root->data){
		root->right = insert(root->right, data);
	}
	return root;
}

//Inorder traversal(Root, Left, Right)
void inorder(struct Node* root){
	if(root !=NULL){
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

//Preorder traversal(Root, Left, Right)
void preorder(struct Node* root){
	if(root != NULL){
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

//Postorder traversal(Left, Right, Root)
void postorder(struct Node* root){
	if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
}

int main(){
	struct Node* root = NULL;
	int i, n;
	int nodes[] = {10, 5, 15, 2, 12, 11, 20};
	n = sizeof(nodes)/sizeof(nodes[0]);
	
	for(i=0; i<n; i++){
		root = insert(root, nodes[i]);
	}
	
	printf("In-order traversal of the BST: ");
	inorder(root);
	printf("\n");
	
	printf("Pre-order traversal of the BST: ");
	preorder(root);
	printf("\n");
	
	printf("Post-order traversal of the BST: ");
	postorder(root);
	return 0;
}
