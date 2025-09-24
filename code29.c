//Print the multiplication table of a number entered by the user.
#include <stdio.h>
int main(){
    int n;
    printf("Enter number: \n");
    scanf("%d",&n);
    int a=n;
    int product;
    for(int i=1;i<=10;i++){
        product=a*i;
        printf("%d * %d =%d \n",a,i,product);
     }
     return 0;
}