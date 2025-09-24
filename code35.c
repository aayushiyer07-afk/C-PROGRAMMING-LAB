//Check if a number is prime or not.
#include <stdio.h>
int main(){
    int n;
    printf("Enter number :\n");
    scanf("%d",&n);
    if(n<2){
        printf("Number is not prime");
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            printf("The number is not prime");
        }else{
            printf("THe number is a prime number");
        }
    }return 0;
}