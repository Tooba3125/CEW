// 1. Write a C program that accepts an employee's ID, total worked hours in a month and 
// the amount received per hour. Print the ID and salary (with two decimal places) of the 
// employee for a particular month.

#include <stdio.h>
int main(){
    int emp_id;
    float hours_worked;
    int salary=500;
    printf("Enter your id here:\t");
    scanf("%d",&emp_id);
    printf("Enter total hours worked in a month:\t");
    scanf("%f",&hours_worked);
    printf("THE ID OF EMPLOYEE IS: %d\nTHE SALARY IS: Rs %.2f",emp_id,hours_worked*salary);
    return 0;
}
