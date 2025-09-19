//IF ELSE IF STATEMENT -->Write a program in which 90 and above -GRADE A
//                                                 80 and above -GRADE B
//                                                 70 and above -GRADE C
//                                                 60 and above -GRADE D
//                                                 Less than 60 - FAIL
#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks");
    scanf("%d", &marks);
    if(marks>=90){
        printf("GRADE A");
    }else if(marks>=80){
        printf("GRADE B");
    }else if(marks>=70){
        printf("GRADE C");
    }else if(marks>=60){
        printf("GRADE D");
    }else {
        printf("FAIL");
    }
    return 0;
}