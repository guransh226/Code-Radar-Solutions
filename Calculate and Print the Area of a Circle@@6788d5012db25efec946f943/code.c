#include <stdio.h>

int main() {
    float r;
    double area;
    const float pi = 3.14;

    scanf("%f",&r);
    area = pi * r * r;
    printf("Area: %.2lf",area);

    return 0;
}