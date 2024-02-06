#include <stdio.h>
#include <ctype.h>

void push(char x);
char pop();
int priority(char x);

char stack[100];
int top = -1;

int main() {

    char exp[100], *e;

    printf("Enter the value = ");
    scanf("%s", exp);
    e = exp;

    while ((*e) != '\0') {
        if (isalnum(*e)) {
            printf("%c", *e);
        } else if ((*e) == '(') {
            push(*e);
        } else if ((*e) == ')') {
            while (stack[top] != '(' && top != -1)
                printf("%c", pop());
            if (stack[top] == '(')
                pop(); 
        } else {
            while (top != -1 && priority(stack[top]) >= priority(*e))
                printf("%c", pop());
            push(*e);
        }
        e++;

    }
    while (top != -1) {
        printf("%c", pop());
    }

    return 0;
}

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x) {
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return -1; 
}
