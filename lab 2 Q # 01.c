// 1. Write a C program to display the first n odd natural numbers and their sum using for, while and 
// do-while loop.

// QUESTION SOLVED THROUGH FOR LOOP:

#include <stdio.h>
int main(){
    int a;
    int i;
    int sum=0;
    printf("Enter any number to display the first n odd natural numbers and their sum:\t");
    scanf("%d",&a);
    
    for(i=1;i<=2*a;i++){
        if(i%2!=0){
            printf("%d ",i);
            sum+=i;
        }
    }
    printf("\nSum of the first %d odd natural numbers is: %d\n", a, sum);
    return 0;
}

// QUESTION SOLVED THROUGH WHILE LOOP:

# include<stdio.h>
int main(){
    int a;
    int i=1;
    int sum=0;
    printf("Enter any number to display the first n odd natural numbers and their sum:\t");
    scanf("%d",&a);
    while(i<=2*a){
        if(i%2!=0){
            printf("%d ",i);
            sum+=i;
        }
        i++;
    }
    printf("\nSum of the first %d odd natural numbers is: %d\n", a, sum);
    return 0;
}

// QUESTION SOLVED THROUGH DO..WHILE LOOP:

# include <stdio.h>
int main(){
    int i=1;
    int sum=0;
    int a;
    printf("Enter any number to display the first n odd natural numbers and their sum:\t");
    scanf("%d",&a);
    do{
        if(i%2!=0){
        printf("%d ",i);
        sum+=i;
        }
    i++;
    }while(i<=2*a);
    printf("\nSum of the first %d odd natural numbers is: %d\n", a, sum);
    return 0;
}
    
