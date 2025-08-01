//Write a program to insert and delete item at the specific position of Double Linked list.

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};

void insert(struct Node** head, int data, int position){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;

	if(position == 1){
		newNode->next = *head;
		newNode->prev = NULL;
		if(*head != NULL){
			(*head)->prev = newNode;
		}
		*head = newNode;
		return;
	}
	
	struct Node* temp = *head;
	int i;
	for(i = 1; temp != NULL && i < position - 1; i++){
		temp = temp->next;
	}
	
	if(temp == NULL){
		printf("Invalid position!\n");
		free(newNode);
		return;
	}
	
	newNode->next = temp->next;
	if(temp->next != NULL){
		temp->next->prev = newNode;
	}
	
	temp->next = newNode;
	newNode->prev = temp;
}

void deleteS(struct Node** head, int position){
	if(*head == NULL){
		printf("List is empty!\n");
		return;
	}
	
	struct Node* temp = *head;
	
	if(position == 1){
		*head = temp->next;
		if(*head != NULL){
			(*head)->prev = NULL;
		}
		free(temp);
		return;
	}
	
	int i;
	for(i=1; temp !=  NULL && i < position; i++){
		temp = temp->next;
	}
	
	if(temp == NULL){
		printf("Invalid position!\n");
		return;
	}
	
	if(temp->next != NULL){
		temp->next->prev = temp->prev;
	}
	
	if(temp->prev != NULL){
		temp->prev->next = temp->next;
	}
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
	insert(&head, 12, 1);
	insert(&head, 17, 2);
	insert(&head, 22, 3);
	insert(&head, 32, 4);
	insert(&head, 45, 5);
	insert(&head, 48, 6);
	printf("Doubly Linked List: ");
	display(head);
	deleteS(&head, 3);
	deleteS(&head, 4);
	printf("After deleting at position 3 & 4: ");
	display(head);
	insert(&head, 15, 2);
	insert(&head, 50, 6);
	printf("After inserting at position 2 & 6: ");
	display(head);
	return 0;
}
