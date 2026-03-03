#include <stdio.h>

int findFirst(int nums[], int n, int target)
{
    int left = 0, right = n - 1;
    int result = -1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(nums[mid] == target)
        {
            result = mid;
            right = mid - 1; 
        }
        else if(nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return result;
}
int findLast(int nums[], int n, int target)
{
    int left = 0, right = n - 1;
    int result = -1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(nums[mid] == target)
        {
            result = mid;
            left = mid + 1; 
        }
        else if(nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return result;
}
int main()
{
    int nums[] = {5,7,7,8,8,10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 8;
    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);
    printf("Output: [%d, %d]\n", first, last);
    return 0;
}