#include <stdio.h>

int findOddElement(int arr[], int n)
{
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        result = result ^ arr[i];
    }
    return result;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 1, 1, 2, 2, 13, 1, 1, 40, 40, 13, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int odd = findOddElement(arr, n);
    printf("Element occurring odd number of times = %d\n", odd);
    return 0;
}