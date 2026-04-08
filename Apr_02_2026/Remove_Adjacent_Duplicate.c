#include <stdio.h>
#include <string.h>
char* removeDuplicates(char* s) {
    int n = strlen(s);
    char stack[n + 1];
    int top = -1;
    for (int i = 0; i < n; i++) {
        if (top >= 0 && stack[top] == s[i]) {
            top--; // remove duplicate
        } else {
            stack[++top] = s[i];
        }
    }
    stack[top + 1] = '\0';
    return strdup(stack); 
}
int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    char* result = removeDuplicates(s);
    printf("Output: %s\n", result);
    return 0;
}