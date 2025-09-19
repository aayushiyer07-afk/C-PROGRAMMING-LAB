//NESTED IF LOOP --> Write a prpgram in which adult can vote and only male can vote.
#include <stdio.h>
int main(){
    int age;
    char gender;
    printf("Enter age :");
    scanf("%d",&age);
    printf("Enter gender (m/f):");
    scanf(" %c",&gender);
    if(age>=18){
        if(gender=='m'){
            printf("Eligible to vote\n");
        }else{printf("Invalid gender input");
        }
    }else{printf("Underage");
    }
    return 0;
}