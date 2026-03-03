#include <stdio.h>

int findMin(int nums[], int n)
{
    int left = 0;
    int right = n - 1;
    while(left < right)
    {
        int mid = left + (right - left) / 2;
        if(nums[mid] > nums[right])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return nums[left];
}
int main()
{
    int nums[] = {4,5,6,7,0,1,2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int min = findMin(nums, n);
    printf("Minimum element = %d\n", min);
    return 0;
}