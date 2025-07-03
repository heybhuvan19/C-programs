#include <stdio.h>

int main(){
    int number, total=1, i;
    printf("Enter the number:");
    scanf("%d",&number);
    for(i=1; i<=number; i++){
        total = total * i;
    }
    printf("Factorial of %d is %d\n",number,total);
    return 0;
}