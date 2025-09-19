#include <stdio.h>
int main(){
    //PROGRAM TO PERFORM CONDITIONAL ASSIGNMENT OPERATIONS ON TWO NUMBERS
    int a;
    printf("Enter number : ");
    scanf("%d" ,&a);
    int c= a+=10;
    int d= a-=10;
    int e= a*=10;
    int f= a/=10;
    printf("Conditional addition : %d\n",c);
    printf("Conditional subtraction : %d \n",d);
    printf("Conditional multiplication : %d \n",e);
    printf("Conditional division : %d \n",f);
    return 0;

}