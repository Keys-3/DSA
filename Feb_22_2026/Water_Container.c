#include <stdio.h>

int maxArea(int height[], int n)
{
    int left = 0;
    int right = n - 1;
    int maxWater = 0;
    while(left < right)
    {
        int minHeight;
        if(height[left] < height[right])
            minHeight = height[left];
        else
            minHeight = height[right];
        int width = right - left;
        int water = minHeight * width;
        if(water > maxWater)
            maxWater = water;
        if(height[left] < height[right])
            left++;
        else
            right--;
    }
    return maxWater;
}

int main()
{
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height) / sizeof(height[0]);
    int result = maxArea(height, n);
    printf("Maximum water stored = %d\n", result);
    return 0;
}