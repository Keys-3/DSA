#include <stdio.h>

int findFloor(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    int floor = -1; 
    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == x)
        {
            return arr[mid];  
        }
        else if (arr[mid] < x)
        {
            floor = arr[mid]; 
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return floor;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    int result = findFloor(arr, n, x);
    if(result == -1)
        printf("Floor does not exist");
    else
        printf("Floor = %d", result);
    return 0;
}