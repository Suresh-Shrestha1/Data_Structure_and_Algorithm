//Write a program to insert and delete an item at the beginning of doubly Linked last.

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};

void insert(struct Node** head, int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = *head;
	
	if(*head != NULL){
		(*head)->prev = newNode;
	}
	*head = newNode;
}

void deleteB(struct Node** head){
	if(*head == NULL){
		printf("List is empty!\n");
		return;
	}
	
	struct Node* temp = *head;
	*head = (*head)->next;
	
	if(*head != NULL){
		(*head)->prev = NULL;
	}
	free(temp);
}

void display(struct Node* head){
	struct Node* temp = head;
	while(temp != NULL){
		printf("%d <->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int main(){
	struct Node* head = NULL;
	
	insert(&head, 10);
	insert(&head, 20);
	insert(&head, 30);
	insert(&head, 40);
	printf("Double Linked List: ");
	display(head);
	deleteB(&head);
	deleteB(&head);
	display(head);
	return 0;
}
