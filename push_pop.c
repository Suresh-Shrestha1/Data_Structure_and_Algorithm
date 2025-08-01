#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the stack

int stack[MAX]; // Array to store stack elements
int top = -1;   // Index of the top element

// Push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d.\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("Pushed %d onto the stack.\n", value);
    }
}

// Pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n");
        return -1; // Return -1 to indicate underflow
    } else {
        int poppedValue = stack[top];
        top--;
        printf("Popped %d from the stack.\n", poppedValue);
        return poppedValue;
    }
}

// Peek at the top element of the stack
int peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return -1;
    } else {
        return stack[top];
    }
}

// Display the stack
void display() {
	int i;
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    // Push elements onto the stack
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); // This will cause a stack overflow

    // Display the current stack
    display();

    // Pop elements from the stack
    pop(); // Removes 50
    pop(); // Removes 40

    // Display the current stack
    display();

    // Peek at the top element
    int topElement = peek();
    if (topElement != -1) {
        printf("Top element: %d\n", topElement);
    }

    return 0;
}

