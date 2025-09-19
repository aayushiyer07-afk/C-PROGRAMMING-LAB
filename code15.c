#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter length of first side :");
    scanf("%d", &a);
    printf("Enter length of second side:");
    scanf("%d", &b);
    printf("Enter third side length :");
    scanf("%d",&c);
    if(a+b>c){
        printf("Triangle is valid");
    }else if(b+c>a){
        printf("Triangle is valid");
    }else if(a+c>b){
        printf("Triangle is valid");
    }else{
        printf("Triangle is invalid");
    }
    if(a==b && b==c){
        printf("Triangle is equilateral");
    }else if(a==b || b==c || a==c){
        printf("Triangle is iscosceles");
    }else if(a*a +b*b== c*c || b*b + c*c == a*a || a*a + c*c ==b*b){
        printf("Triangle is right angled");
    }else{
        printf("Triangle is scalene");
    }
    return 0;
}