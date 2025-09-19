#include <stdio.h>
int main(){
    unsigned int x1,x2,x3,y1,y2,y3;
    unsigned area;
    printf("enter x1");
    scanf("%ud",&x1);
    printf("enter x2");
    scanf("%ud",&x2);
    printf("enter x3");
    scanf("%ud",&x3);
    printf("enter y1");
    scanf("%ud",&y1);
    printf("enter y2");
    scanf("%ud",&y2);
    printf("enter y3");
    scanf("%ud",&y3);
    area= 0.5*(x1*(y2-y3)+x2 *(y3-y1)+x3*(y1-y2));
    if(area==0){
        printf("Points are collinear");
    }else{
        printf("Points are non collinear");
    }
    return 0;


}