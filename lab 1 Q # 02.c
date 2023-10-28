// 2. Write a C program that takes the height and width of a rectangle as an input from user 
// and compute the perimeter and area of a rectangle.

# include <stdio.h>
int main(){
    float h;
    float w;
    
    printf("ENTER THE HEIGHT OF RECTANGLE IN CENTIMETERS:\t");
    scanf("%f",&h);
    
    printf("ENTER THE width OF RECTANGLE IN CENTIMETERS:\t");
    scanf("%f",&w);
    
    printf("Perimeter of rectangle is: %.2f cm\nArea is:%.2f cm²",2*(h+w),h*w);
              // Perimeter = 2(length + width)
              // Area = length × width
    return 0;
}
