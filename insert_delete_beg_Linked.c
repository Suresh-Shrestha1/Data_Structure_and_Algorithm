//Write a program to insert and detect item at the beginnig of singly linked list.

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void insert(struct Node** head, int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode-> data = data;
	newNode->next = *head;
	*head = newNode;
}

void delete(struct Node** head){
	if(*head == NULL){
		printf("List is empty!\n");
		return;
	}
	struct Node* temp = *head;
	*head = (*head)-> next;
	free(temp);
}

void display(struct Node* head){
	struct Node* temp = head;
	while (temp != NULL){
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int main(){
	struct Node* head = NULL;
	insert(&head, 5);
	insert(&head, 10);
	insert(&head, 15);
	insert(&head, 20);
	display(head);
	delete(&head);
	display(head);
	return 0;
}
