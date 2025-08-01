// Infix to postfix conversion

#include <stdio.h>
#include<ctype.h>

#define MAX 15

char stack[MAX], postfix[MAX];
char infix[MAX];
int top = -1;

void push (char c) {
    stack[++top] = c;
}
char pop() {
    return (top == -1) ? -1 : stack[top--];
}

int precedence(char c) {
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return 0;
}

void infixToPostfix()
{
    int i, j =0;
    for(i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];
        if(isalnum(c)) {
            postfix[j++] = c;
        } 
        else if(c == '(') {
            push(c);
        } 
        else if(c == ')') {
            while(top != -1 && stack[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop();
        } 
        else {
            while(top !=-1 && precedence(stack[top]) >= precedence(c)) 
            {
                postfix[j++] = pop();
            }
            push(c);
        }
    }
    while(top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

int main() {
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    infixToPostfix();
    printf("Postfix expression: %s\n", postfix);
    return 0;
}

// void infixToPostfix() {
//     char *e, x;
//     e = infix;
//     while(*e != '\0') {
//         if(isalnum(*e)) {
//             printf("%c", *e);
//         } else if(*e == '(') {
//             push(*e);
//         } else if(*e == ')') {
//             while((x = pop()) != '(') {
//                 printf("%c", x);
//             }
//         } else {
//             while(precedence(stack[top]) >= precedence(*e)) {
//                 printf("%c", pop());
//             }
//             push(*e);
//         }
//         e++;
//     }
//     while(top != -1) {
//         printf("%c", pop());
//     }
// }
