//Insert and Delete node from circular linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int data, int position){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (*head == NULL) {
        newNode->next = newNode; // Point to itself
        *head = newNode;
        return;
    } 
    if(position == 1){
        struct Node* temp = *head;
        newNode->next = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        *head = newNode;
        return;
    } 
    else {
        struct Node* temp = *head;
        int i;
        for (i = 1; temp != NULL && i < position - 1; i++) {
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Position out of bounds\n");
            free(newNode);
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteNode(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    if (position == 1) {
        if (*head == (*head)->next) {
            free(*head);
            *head = NULL;
            return;
        } 
        while (temp->next != *head) {
            temp = temp->next;
        }
        struct Node* toDelete = *head;
        temp->next = (*head)->next;
        *head = (*head)->next;
        free(toDelete);
        return;    
    }
    struct Node* prev = NULL;
    int i;
    for (i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}

void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } 
	while (temp != head);
    printf("(Back to %d)\n", head->data);
}

int main() {
    struct Node* head = NULL;
    insert(&head, 10, 1);
    insert(&head, 20, 2);
    insert(&head, 30, 3);
    insert(&head, 40, 2);
    insert(&head, 50, 1);
    printf("Circular Linked List: ");
    display(head);
    deleteNode(&head, 3);
    printf("After deleting node at position 3: ");
    display(head);
    deleteNode(&head, 1);
    printf("After deleting node at position 1: ");
    display(head);
    return 0;
}

// Output:
// Circular Linked List: 50 -> 10 -> 40 -> 20 -> 30 -> (Back to 50)
// After deleting node at position 3: 50 -> 10 -> 20 -> 30 -> (Back to 50)
// After deleting node at position 1: 10 -> 20 -> 30 -> (Back to 10)
