// Write a program in C that checks whether the entered number is even or odd.Take number as input from user.

# include <stdio.h>
int main(){
    int a;
    printf("ENTER ANY NUMBER:\t");
    scanf("%d",&a);
    if(a%2==0){
        printf("The entered number %d is even",a);
    }else{
        printf("The entered number %d is odd",a);
    }
    return 0;
}
