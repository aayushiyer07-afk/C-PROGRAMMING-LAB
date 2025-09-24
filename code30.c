//Find the factorial of a given number.
#include <stdio.h>
int main(){
    int n;
    long factorial=1;
    printf("Enter number :\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    factorial=factorial*i;
    }
    printf("Factorial of the given number is : %d",factorial);
    return 0;
}