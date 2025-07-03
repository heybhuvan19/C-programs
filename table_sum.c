#include <stdio.h>

int main(){
    int number=8,sum= 0,i=1;
    while(i<=10){
        printf("%d\n",number*i);
        sum= sum + (number*i);
        i++;
    }
    printf("The total sum of all the numbers occuring in table of 8 are %d",sum);
    return 0;
}