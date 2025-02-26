// Your code here...
#include <stdio.h>
int main(){
    int cost;
    int selling;
    scanf("%d\t",&cost);
    scanf("%d",&selling);
    if(cost<selling){
        printf("Profit");
    }
    else if(selling<cost){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;

}