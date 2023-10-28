// 5. Write a function to calculate the nth Fibonacci number and call it recursively to print 
// the Fibonacci series

#include <stdio.h>

int main(){
    int a=0;
    int b=1;
    int num;
    printf("Enter nth term of the fibonacci series :\t");
    if(scanf("%d",&num)!=1){
        printf("Invalid input. Please enter an integer.");
        return 1;
    }
    if(num<1){
        printf("enter positive integer only.");
    }
    if(num>=1){
        printf("1 ");
        fib(a,b,num-1);
    }
    return 0;
}

int fib(int a,int b,int num){
    int x=a;
    int y=b;
    int n=num;
    int z;
    if(n==0){
        return 0;
    }else{z=x+y;
    printf("%d ",z);
    return fib(b,z,n-1);
    } 
    return 0;
}
