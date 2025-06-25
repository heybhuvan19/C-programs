#include <stdio.h>

int main(){
    int maths,english,science,total;
    maths = printf("Enter the marks obtained:");
    scanf("%d",&maths);
    english = printf("Enter the marks obtained:");
    scanf("%d",&english);
    science = printf("Enter the marks obtained:");
    scanf("%d",&science);
    total = maths+english+science;

    if(total*100/240>=40){
        printf("Passed! Congratulations you have been promoted");
    }
    
    if(maths*100/80>=33){
        if(english*100/80>=33){
            if(science*100/80>=33){
                printf("Passed! Congratulation you have been promoted");
            }
            else{
                printf("Repeat ! You need to repeat the class again");
            }
        }
        else{
            printf("Repeat ! You need to repeat the class again");
        }
    }
    else{
        printf("Repeat ! You need to repeat the class again");
    }
    return 0;
}