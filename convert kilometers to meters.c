#include <stdio.h>

int main() {
    float km, meter;

    scanf("%f", &km);

    meter = km * 1000;

    printf("%.2f meters", meter);

    return 0;
}