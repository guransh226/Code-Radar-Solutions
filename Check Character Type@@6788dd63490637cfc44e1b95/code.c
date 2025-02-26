// Your code here...
#include<stdio.h>
int main(){
    char my;
    scanf("%c",&my);
    if(my == 'a' ||my == 'e' ||my == 'i' ||my == 'o' ||my == 'o' ||my == 'u' ||my == 'A' ||my == 'E' ||my == 'I' ||my == 'O' ||my == 'U'){
        printf("Vowel");
    }
    else if(my>='a' && my<='z'){
        printf("Consonant");
    }
    else if(my>='0' && my<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}