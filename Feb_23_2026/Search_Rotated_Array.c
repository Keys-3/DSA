#include <stdio.h>

int search(int nums[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(nums[mid] == target)
            return mid;
        if(nums[left] <= nums[mid])
        {
            if(target >= nums[left] && target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        else
        {
            if(target > nums[mid] && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int nums[] = {4,5,6,7,0,1,2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 0;
    int result = search(nums, n, target);
    printf("Index of target = %d\n", result);
    return 0;
}