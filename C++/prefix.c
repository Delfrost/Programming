#include<stdio.h>
#include<string.h>
#include<ctype.h>

char infix[20], prefix[20], stack[20];
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

void reverse(char str[]) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void infixToPrefix() {
    int i, j;
    char ch;
    reverse(infix);

    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        ch = infix[i];

        if (isalnum(ch)) {
            prefix[j++] = ch;
        }
        else if (ch == ')') {
            push(ch);
        }
        else if (ch == '(') {
            while (stack[top] != ')') {
                prefix[j++] = pop();
            }
            pop(); // Discard the ')'
        }
        else {
            while (precedence(stack[top]) > precedence(ch)) {
                prefix[j++] = pop();
            }
            push(ch);
        }
    }

    while (top != -1) {
        prefix[j++] = pop();
    }

    prefix[j] = '\0';
    reverse(prefix);
}

int main() {
    printf("Enter any expression:\n");
    scanf("%s", infix);

    infixToPrefix();

    printf("Prefix: %s\n", prefix);
    return 0;
}