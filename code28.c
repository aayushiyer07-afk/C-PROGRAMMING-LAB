//Calculate sum of first 50 natural numbers
#include <stdio.h>
int main(){
    int sum=0;
    int i;
    for(i=1;i<=50;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}