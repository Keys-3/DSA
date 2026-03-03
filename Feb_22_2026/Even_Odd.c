#include <stdio.h>

void segregateEvenOdd(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    int temp;
    while(left < right)
    {
        while(arr[left] % 2 == 0 && left < right)
        {
            left++;
        }
        while(arr[right] % 2 != 0 && left < right)
        {
            right--;
        }
        if(left < right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    segregateEvenOdd(arr, n);
    printf("Array after segregation:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}