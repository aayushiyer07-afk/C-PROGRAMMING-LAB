#include <stdio.h>
int main(){
    float height;
    float weight;
    printf("Enter your height in meters : ");
    scanf("%f",&height);
    printf("Enter weight in kg: ");
    scanf("%f",&weight);
    float BMI=weight/(height*height);
    printf("Your BMI is : %f",BMI);
    if(BMI<15){
        printf("Starvation");
    }else if( BMI>15.1 && BMI<17.5){
        printf("Anorexic");
    }else if(BMI>17.6 && BMI<18.5){
        printf("UNderweight");
    }else if(BMI>18.6 && BMI<24.9){
        printf("Ideal");
    }else if(BMI>25 && BMI<25.9){
        printf("Overweight");
    }else if(BMI>30 && BMI<39.9){
printf("Obese");
    }else{
        printf("Morbidity Obese");
    }
    return 0;
}