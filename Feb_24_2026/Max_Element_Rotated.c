#include <stdio.h>

int findMax(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while(left < right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid] > arr[right])
        {
            left = mid;
        }
        else if(arr[mid] < arr[right])
        {
            right = mid - 1;
        }
        else
        {
            right--;
        }
        if(right == left + 1)
            return (arr[left] > arr[right]) ? arr[left] : arr[right];
    }
    return arr[left];
}
int main()
{
    int arr[] = {5, 6, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum element = %d\n", findMax(arr, n));
    return 0;
}