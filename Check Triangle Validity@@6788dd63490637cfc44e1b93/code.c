// Your code here...
#include <stdio.h>
int main(){
    int side1,side2,side3;
    scanf("%d\t",&side1);
    scanf("%d\t",&side2);
    scanf("%d",&side3);
    int sq1 = side1*side1;
    int sq2 = side2*side2;
    int sq3 = side3*side3;
    if(sq1 + sq2 >= sq3 && sq2 + sq3 >= sq1 && sq3 + sq1 >= sq2){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}