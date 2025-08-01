//Write a program to insert an delete an item at specific position of singly linked list.

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void insert(struct Node** head, int data, int position){
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->data = data;
	
	if(position == 1){
		newNode->next = *head;
		*head = newNode;
		return;
	}
	struct Node* temp = *head;
	int i;
for(i=1; temp!=NULL&&i<position-1; i++){
	temp = temp->next;
	}
	if(temp == NULL){
		printf("Position out of range\n");
		free(newNode);
		return;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

void deleteP(struct Node** head, int position){
	if(*head == NULL){
		printf("List is empty\n");
		return;
	}
	struct Node* temp = *head;
	if(position == 1){
		*head = temp->next;
		free(temp);
		return;
	}
	struct Node* prev = NULL;
	int i;
	for(i=1; temp!=NULL&&i<position; i++){
		prev = temp;
		temp = temp->next;
	}
	if(temp==NULL){
		printf("Position out of range!\n");
		return;
	}
	prev->next= temp->next;
	free(temp);
}

void display(struct Node* head){
	struct Node* temp = head;
	while(temp != NULL){
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int main(){
	struct Node* head = NULL;
	
	insert(&head, 10, 1);
	insert(&head, 20, 2);
	insert(&head, 30, 3);
	insert(&head, 40, 4);
	insert(&head, 50, 5);
	insert(&head, 60, 6);
	display(head);
	deleteP(&head, 2);
	deleteP(&head, 5);
	display(head);
	insert(&head, 90, 5);
	insert(&head, 80, 6);
	display(head);
	return 0;
}
