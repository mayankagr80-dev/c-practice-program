#include <stdio.h>

int main() {
    int days, years, months, remaining;

    scanf("%d", &days);

    years = days / 365;
    remaining = days % 365;
    months = remaining / 30;
    remaining = remaining % 30;

    printf("Years = %d\n", years);
    printf("Months = %d\n", months);
    printf("Days = %d", remaining);

    return 0;
}