#include <stdio.h>

char nextGreatestLetter(char letters[], int n, char target)
{
    int left = 0, right = n - 1;
    char result = letters[0]; 
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (letters[mid] > target)
        {
            result = letters[mid];
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return result;
}
int main()
{
    char letters[] = {'c', 'f', 'j'};
    int n = sizeof(letters) / sizeof(letters[0]);
    char target = 'a';
    char answer = nextGreatestLetter(letters, n, target);
    printf("Next greatest letter = %c", answer);
    return 0;
}