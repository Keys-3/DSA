#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[] = {-4, -1, 0, 3, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result[n];
    int left = 0;
    int right = n - 1;
    int pos = n - 1;
    while(left <= right)
    {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];
        if(leftSquare > rightSquare)
        {
            result[pos] = leftSquare;
            left++;
        }
        else
        {
            result[pos] = rightSquare;
            right--;
        }
        pos--;
    }
    printf("Sorted squares array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}