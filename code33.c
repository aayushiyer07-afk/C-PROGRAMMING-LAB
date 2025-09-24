#include <stdio.h>
int main(){
    int n;
    int sum=0,d;
    printf("Enter the number: ");
    scanf("%d",&n);
   
    for(;n!=0;n/=10){
        d=n%10;
        sum=sum+d;
    }
    printf("Sum of digits of given number :%d ",sum);
    return 0;
}