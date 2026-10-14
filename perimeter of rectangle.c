#include <stdio.h>

int main() {
    float length, breadth;

    scanf("%f %f", &length, &breadth);

    printf("Perimeter = %f", 2 * (length + breadth));

    return 0;
}