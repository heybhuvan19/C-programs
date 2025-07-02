//write a program to print natural number between 10 to 20 while the inital counter is set to 0
#include <stdio.h>

int main(){
    int i = 0;
    while (i<=20){
        if(i>=10){
            printf("The value of i is %d \n",i);
        }
        i++;
    }
    return 0;
}