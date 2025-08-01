// Implement queues

#include <stdio.h>
#define SIZE 5 // maxsize of the queue
int queue[SIZE]; //
int front = -1, rear = -1; 

// Function to check if the queue is full
int isFull() {
   return rear == SIZE - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
    }

// Function to add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full\n");
    }
    else {
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("Enqueued is %d\n", value);
    }
}

// Function to remove an element from the queue
void dequeue() {
    int value;
    if (isEmpty()) {
        printf("Queue is empty\n");
    }
    else {
        value = queue[front];
        if(rear == front) {
            rear = front = -1;
        }
        else {
        front++;
        }
        printf("Dequeued is %d\n", value);
    }
}

// Function to display the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!cannot display the elements\n");
    }
    else {
        int i;
        printf("Queue elements are: ");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);
    enqueue(30); // This should print "Queue is full"
    dequeue();
    dequeue();
    display();
    return 0;
}
