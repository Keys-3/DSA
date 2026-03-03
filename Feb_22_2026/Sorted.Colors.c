#include <stdio.h>

void sortColors(int nums[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    int temp;
    while(mid <= high)
    {
        if(nums[mid] == 0)
        {
            temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            low++;
            mid++;
        }
        else if(nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
    }
}

int main()
{
    int nums[] = {2,0,2,1,1,0};
    int n = sizeof(nums) / sizeof(nums[0]);
    sortColors(nums, n);
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}