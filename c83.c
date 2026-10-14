#include <stdio.h>
int main() {
    int n, first, last;
    scanf("%d", &n);
    if(n < 0)
        n = -n;
    last = n % 10;
    while(n >= 10)
        n = n / 10;
    first = n;
    if(first == last)
        printf("Equal");
    else
        printf("Not equal");
    return 0;
}