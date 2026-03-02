#include <stdio.h>

int main()
{
    int n, digit;
    int sum = 0;
    int product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        digit = n % 10;     
        sum = sum + digit;
        product = product * digit; 
        n = n / 10;  
    }
    int result = product - sum;
    printf("Difference (Product - Sum) = %d\n", result);
    return 0;
}