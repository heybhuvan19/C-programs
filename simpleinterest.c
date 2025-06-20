//write a program to find the simple interest for a set of values representing principal, interest and rate of interest.

#include <stdio.h>

int main(){
    int principle, interest, years, simpleinterest;
    printf("Enter the principle amount \n:");
    scanf("%d",&principle);
    
    printf("Enter the interest percentage\n:");
    scanf("%d",&interest);
    
    printf("Enter the number of years\n:");
    scanf("%d",&years);

    simpleinterest = principle*interest*years/100;
    printf("The simple interest is %d",simpleinterest);
    
    return 0;
}