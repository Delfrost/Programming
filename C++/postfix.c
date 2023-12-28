#include<stdio.h>
char infix[20], postfix[20], stack[20];
int top = -1;

int precedence(char x) {
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int main() {
    printf("Enter any expression:\n");
    scanf("%s", infix);
    int i = 0;
    while (infix[i] != '\0') {
        i++;
    }
    stack[++top] = '(';
    infix[i] = ')';
    i = 0;
    int j = 0;
    while (infix[i] != '\0') {
        if (infix[i] == '(')
            push(infix[i]);

        else if ((infix[i] >= 65 && infix[i] <= 90) || (infix[i] >= 97 && infix[i] <= 122))
            postfix[j++] = infix[i];

        else if (infix[i] == ')') {
            while (stack[top] != '(') {
                postfix[j] = pop();
                j++;
            }
            pop();
        }
        else {
            while (precedence(stack[top]) >= precedence(infix[i]) && top >= -1) {
                postfix[j] = pop();
                j++;
            }
            push(infix[i]);
        }
        i++;
    }
    while (top > -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    printf("postfix: %s\n", postfix);
    return 0;
}