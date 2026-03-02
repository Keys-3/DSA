#include <stdio.h>

int maxProfit(int prices[], int n)
{
    int minPrice = prices[0];
    int maxProfit = 0;
    for(int i = 1; i < n; i++)
    {
        if(prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else
        {
            int profit = prices[i] - minPrice;
            if(profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
    }
    return maxProfit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    int result = maxProfit(prices, n);
    printf("Maximum Profit = %d\n", result);
    return 0;
}