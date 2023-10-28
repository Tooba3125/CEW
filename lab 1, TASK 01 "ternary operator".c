#include <stdio.h>
int main(){
    int a;
    printf("ENTER ANY NUMBER:\t");
    scanf("%d",&a);
    (a%2==0)?printf("even number"):printf("odd number");
    return 0;
}
