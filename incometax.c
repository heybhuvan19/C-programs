#include <stdio.h>

int main(){
    int income;
    float tax;
    printf("Enter your annual income: ");
    scanf("%d",&income);
    
    if(income>250000 && income<500000){
        tax = (5.0/100)*income;
        printf("Tax to be paid is %f",tax);
    }
    else if(income>500000 && income<1000000){
        tax = (20.0/100)*income;
        printf("Tax to be paid is %f",tax);
    }
    else if(income>1000000){
        tax = (10.0/100)*income;
        printf("Tax to be paid is %f",tax);
    }
    else {
        printf("You don't need to pay any tax ! Go increase your salary");
    }
    return 0;
}