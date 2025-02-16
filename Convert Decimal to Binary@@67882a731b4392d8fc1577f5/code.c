// Your code here...
#include<stdio.h>
void decimalbin(int num){
    int binary[32],i=0;
    if(num == 0){
        printf("0\n");
        return 0;

    }
    while(num>0){
        binary[i++]=num%2;
        num / = 2;
    }
    for(int j=i-1; j>=0; j--){
        printf("%d",binary[j]);
    }
    printf("\n");
}
int main(){
    int num;
    scanf("%d",&num);
    decimalbin(num);
    return 0;
}