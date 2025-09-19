#include <stdio.h>
int main(){
    //PROGRAM TO PERFORM ARITHMETIC OPERATIONS ON TWO NUMBERS FROM USER
    int a;
    int b;
    printf("Enter first number :\n ");
    scanf("%d" ,&a);
    printf("Enter the second number : \n");
    scanf("%d" ,&b);
    int c = a+b;
    int d = a-b;
    int e = a*b;
    float f = a/b;
    printf("The sum is : %d \n",c);
    printf("The difference is : %d\n",d);
    printf("The product is : %d",e);
    printf("The division is : %f",f);
    return 0;
    
}