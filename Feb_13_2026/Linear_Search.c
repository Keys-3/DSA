#include <stdio.h>

int main() {
    int arr[100], n, key, i, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }
    if(found == 0) {
        printf("Element not found\n");
    }
    return 0;
}