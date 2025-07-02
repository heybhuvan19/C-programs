#include <stdio.h>

int main(){
    int number, i=1;
    printf("Enter the number of which table you want:");
    scanf("%d",&number);
    while(i<=10){
        printf("%d \n",number*i);
        i++;
    }
    return 0;
}