//	WAP to demonstrate circular queue

#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isEmpty(){
	return (rear == -1 && front == -1);
}

int isFull(){
	return ((rear == MAX-1 && front ==0) || (front == rear + 1));
}

void enqueue (int value){
	if(isFull()){
		printf("Queue Overflow! Cannot enqueue element.\n");
	}
	else{
		if(front == -1){
			front = 0;
		}
		rear = (rear+1)%MAX;
		queue[rear] = value;
		printf("Enqueued element is %d\n", value);
	}
}

void dequeue(){
	if(isEmpty()){
		printf("Queue Underflow! Cannot dequeue element.\n");
	}
	else{
		int value = queue[front];
		if(front == rear){
			front = -1; rear = -1;
		}
		else{
			front = (front + 1)%MAX;
		}
		printf("Dequeued element is %d\n", value);
	}
}

void display(){
	if(isEmpty()){
		printf("Queue underflow! Cannnot display element\n");
	}
	else{
		printf("Queue Elements: ");
		int i = front;
		while(1){
			printf("%d ",queue[i]);
			if(i == rear){
				break;
			}
			i = (i + 1) % MAX;
		}
		printf("\n");
	}
}

int main(){
	enqueue(3);
    enqueue(9);
    enqueue(14);
    enqueue(18);
    enqueue(23);
    enqueue(27); // This should print "Queue is full"
    display();
	dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();// This should print "Queue is empty"
    display(); //Can't display element
    enqueue(5);
    enqueue(15);
    display();
	return 0;
}
