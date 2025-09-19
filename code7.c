#include <stdio.h>
int main(){
    //PROGRAM TO PERFORM LOGICAL OPERATIONS ON TWO NUMBERS FROM USER.
    int a;
    int b;
    printf("Enter first number :\n ");
    scanf("%d" ,&a);
    printf("Enter the second number : \n");
    scanf("%d" ,&b);
    int c =a&&b;
    int d= a||b;
    int e=(a||b)&&!(a&&b);
    printf("%d \n",c);
    printf("%d \n",d);
    printf("%d \n",e);
    return 0;
}