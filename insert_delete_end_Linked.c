//Write a program to insert and delete an item at the end of singly linked list.

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void insert(struct Node** head, int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	
	if(*head == NULL){
		*head = newNode;
		return;
	}
	
	struct Node* temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

void deleteEnd(struct Node** head){
	if(*head == NULL){
		printf("List is empty!\n");
		return;
	}
	if((*head)->next == NULL){
		free(*head);
		*head = NULL;
		return;
	}
	struct Node* temp = *head;
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
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
	
	insert(&head, 10);
	insert(&head, 20);
	insert(&head, 30);
	display(head);
	deleteEnd(&head);
	display(head);
	return 0;
}


