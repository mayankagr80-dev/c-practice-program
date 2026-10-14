#include <stdio.h>
int main() {
    int n, digit, count = 0;
    scanf("%d", &n);
    if(n == 0)
        count = 1;
    while(n != 0) {
        digit = n % 10;
        if(digit == 0)
            count++;
        n = n / 10;
    }
    printf("Zeros = %d", count);
    return 0;
}