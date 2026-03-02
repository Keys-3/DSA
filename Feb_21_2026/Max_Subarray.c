#include <stdio.h>

int maxSubArray(int nums[], int n)
{
    int currentSum = nums[0];
    int maxSum = nums[0];
    for(int i = 1; i < n; i++)
    {
        if(currentSum + nums[i] > nums[i])
            currentSum = currentSum + nums[i];
        else
            currentSum = nums[i];
        if(currentSum > maxSum)
            maxSum = currentSum;
    }
    return maxSum;
}
int main()
{
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = maxSubArray(nums, n);
    printf("Maximum subarray sum = %d\n", result);
    return 0;
}