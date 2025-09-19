#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    int maxp;
    printf("Enter length of first rectangle : ");
    scanf("%d",&a);
    printf("Enter breadth of first rectangle :");
    scanf("%d",&b);
    printf("Enter length of second rectangle :");
    scanf("%d",&c);
    printf("Enter breadth of seond rectangle : ");
    scanf("%d",&d);
    printf("Enter length of third rectangle :");
    scanf("%d",&e);
    printf("Enter breadth of third rectangle :");
    scanf("%d",&f);
    int p1 = 2*(a+b);
    int p2= 2*(c+d);
    int p3=2*(e+f);
    maxp =(p1>p2)?(p2>p3?p1:p3):((p2>p3)?p2:p3);
    printf("Perimeter of first rectangle :%d",p1);
    printf("Perimeter of second rectangle :%d",p2);
    printf("Perimeter of third rectangle :%d",p3);
    if(maxp ==p1){
        printf("rectangle 1 has largest perimeter : %d",maxp);
    }else if(maxp ==p2)
    { printf("Rectangle 2 has highest perimeter : %d",maxp);}
    else{
        printf("Rectangle 3 has largest perimeter :%d",maxp);
    
    }
   return 0;
}