#include <stdio.h>
int main() {
    int hours, bill;
    scanf("%d", &hours);
    if(hours <= 0)
        printf("Invalid hours");
    else if(hours <= 2) {
        bill = 30;
        printf("Bill = %d", bill);
    }
    else {
        bill = 30 + (hours - 2) * 10;
        printf("Bill = %d", bill);
    }
    return 0;
}