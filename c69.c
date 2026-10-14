#include <stdio.h>

int main()
{
    int n, i = 2, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    while(i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }

    printf("Sum = %d", sum);

    return 0;
}