//Write a program to insert and delete item at the end of double Linked list.

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
	newNode->next = NULL;
	if(*head == NULL){
		newNode->prev = NULL;
		*head = newNode;
		return;
	}
	
	struct Node* temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
}

void deleteEn(struct Node** head){
	if(*head == NULL){
		printf("List is empty!\n");
		return;
	}
	struct Node* temp = *head;
	if(temp->next == NULL){
		free(temp);
		*head = NULL;
		return;
	}
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->prev->next = NULL;
	free(temp);
}

void display(struct Node* head){
	struct Node* temp = head;
	while(temp != NULL){
		printf("%d <-> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int main(){
	struct Node* head = NULL;
	insert(&head, 12);
	insert(&head, 17);
	insert(&head, 22);
	insert(&head, 32);
	insert(&head, 45);
	printf("Doubly Linked List: ");
	display(head);
	deleteEn(&head);
	deleteEn(&head);
	deleteEn(&head);
	printf("After deleting: ");
	display(head);
	return 0;
}
