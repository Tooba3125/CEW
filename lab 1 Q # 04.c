// 4. Write a program in C to convert a decimal number to a binary number using functions.

# include <stdio.h>
int deci_to_binary(int d){
    int dec=d;
    int bin[32];
    int i=0;
    int j;
    while(dec>0){
        if(dec%2==0){
            bin[i]=0;
        }else{
            bin[i]=1;
        }
        dec=dec/2;
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",bin[j]);
    }
    return 0;
}
int main(){
    int d;
    printf("ENTER NUMBER: ");
    scanf("%d",&d);
    deci_to_binary(d);
    return 0;
}
