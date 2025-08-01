//WAP to count the nodes in linked list.

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

int countNodes(struct Node* head){
	int count = 0;
	struct Node* temp = head;
	
	while(temp != NULL){
		count++;
		temp = temp -> next;
	}
	return count;
}

int main(){
	struct Node* head=(struct Node*)malloc(sizeof(struct Node));
	struct Node* second=(struct Node*)malloc(sizeof(struct Node));
	struct Node* third=(struct Node*)malloc(sizeof(struct Node));
	struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
	
	head ->	data = 7;
	head -> next = second;
	
	second -> data = 12;
	second -> next = third;
	
	third -> data = 19;
	third -> next = fourth;
	
	fourth -> data = 25;
	fourth -> next = NULL;
	
	printf("Total number of nodes: %d.\n", countNodes(head));
	
	return 0;
}
