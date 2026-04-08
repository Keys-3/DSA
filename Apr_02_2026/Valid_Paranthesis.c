#include <stdio.h>
#include <string.h>
char stack[100];
int top = -1;
void push(char c) {
    stack[++top] = c;
}
char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}
int isMatchingPair(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}
int isValid(char *s) {
    for (int i = 0; i < strlen(s); i++) {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }
        else {
            char topChar = pop();
            if (!isMatchingPair(topChar, ch)) {
                return 0; // false
            }
        }
    }
    return top == -1;
}
int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    if (isValid(s))
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}