// Write a program in C that does the following:
// 1.Take a number as input from the user.
// 2.If the number is positive,print its table upto 10,using function.



#include <stdio.h>
void print_table(int a){
    int x=a;
    int i;
    if(x>=0){
        for(i=1;i<=10;i++){
            printf("%d x %d = %d\n",x,i,x*i);
        }
    }else{
        printf("can not print table.");
    }
}
int main(){
    int a;
    int i;
    printf("Enter a number:\t");
    scanf("%d",&a);
    print_table(a);
    return 0;
}
