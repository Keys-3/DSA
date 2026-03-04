#include <stdio.h>

int findKthPositive(int arr[], int n, int k)
{
    int missing = 0;
    int current = 1;
    int i = 0;
    while (missing < k)
    {
        if (i < n && arr[i] == current)
        {
            i++;
        }
        else
        {
            missing++;
            if (missing == k)
                return current;
        }
        current++;
    }
    return current;
}
int main()
{
    int arr[] = {2, 3, 4, 7, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    printf("Kth missing number = %d", findKthPositive(arr, n, k));
    return 0;
}