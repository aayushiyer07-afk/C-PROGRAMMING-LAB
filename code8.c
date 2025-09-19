#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter first number :\n ");
    scanf("%d" ,&a);
    printf("Enter the second number : \n");
    scanf("%d" ,&b);
    int c = a&b;
    int d= a | b;
    int e =a^b;
    printf("AND is : %d",c);
    printf("OR is : %d",d);
    printf("XOR is  :%d",e);
    return 0;
}