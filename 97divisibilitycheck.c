#include <stdio.h>

int main(){
    int number;
    printf("Enter the number :\n");
    scanf("%d",&number);
    if (number%97==0){
        printf("Divisible");
    }
    else{
        printf("Not divisible");
    }
    return 0;
}   