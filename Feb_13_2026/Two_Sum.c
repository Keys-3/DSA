#include <stdio.h>

int main()
{
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int numbers[n];
    printf("Enter sorted elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    int left = 0;
    int right = n - 1;
    while(left < right)
    {
        int sum = numbers[left] + numbers[right];
        if(sum == target)
        {
            printf("Indices: [%d, %d]\n", left + 1, right + 1);
            break;
        }
        else if(sum < target)
        {
            left++;
        }
        else if(sum > target)
        {
            right--;
        }
    }
    return 0;
}