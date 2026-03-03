#include <stdio.h>
#include <limits.h>

int divide(int dividend, int divisor)
{
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    long long dvd = llabs(dividend);
    long long dvs = llabs(divisor);
    long long left = 0, right = dvd, ans = 0;
    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        if (mid * dvs <= dvd)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return sign * ans;
}
int main()
{
    int dividend = 20;
    int divisor = 3;
    printf("Quotient = %d", divide(dividend, divisor));
    return 0;
}