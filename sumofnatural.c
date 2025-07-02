//using while loop
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

//using while for loop
#include <stdio.h>

int main(){
    int number,sum=0,i;
    printf("Enter the number:");
    scanf("%d",&number);
    for(i=0; i<=number; i++){
        sum = sum + i;
    }
    printf("The sum of first %d natural number is %d",number,sum);
    return 0;
}
 
//using do-while loop
#include <stdio.h>

int main(){
    int number,i=0, sum=0;
    printf("Enter the number:");
    scanf("%d",&number);
    do{
        sum = sum + i;
        i++;
    }while(i<=number);
    printf("The sum of first %d natural number is %d",number,sum);
    return 0;
}