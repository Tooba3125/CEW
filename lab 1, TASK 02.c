// TASK NO 02
// Write a program in C that does the following :
// 1. Input 1st number as input from the user.
// 2. Input 2nd number as input from the user.
// 3.If both are greater than 5,add them.
// 4.If one of them is greater than 5,multiply them.
// 5.If both are less than 5,add 1 to them.
// 6.else print "hello world".

#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter your first number here:\t");
    scanf("%d",&a);
    printf("Enter your second number here:\t");
    scanf("%d",&b);
    if(a>5 && b>5){
        printf("%d",a+b);
    }else if(a>5 || b>5){
        printf("%d",a*b);
    }else if(a<5 && b<5){
        printf("%d , %d",a+1,b+1);
    }else{
        printf("hello world");
    }
    return 0;
}
