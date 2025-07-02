#include <stdio.h>

int main(){
    int number,i=0, sum=0;
    printf("Enter the number:");
    scanf("%d",&number);
    while(i<=number){
        sum = sum + i;
        i++;
    }
    printf("The sum of first %d natural number is %d",number,sum);
    return 0;
}