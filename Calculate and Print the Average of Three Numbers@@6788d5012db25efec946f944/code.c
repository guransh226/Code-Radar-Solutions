#include <stdio.h>
int main() {
    int a,b,c;
    float avg;
    scanf("%d %d %d",&a,&b,&c);

    avg = a+b+c;
    printf("Average: %.2f",avg/3);
    return 0;
}