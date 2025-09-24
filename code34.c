//Compute a^b(a raised to power b)
#include <stdio.h>
int main(){
    int a,b,p=1;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){
        p*=a;
    }
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}