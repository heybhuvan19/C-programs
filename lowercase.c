#include <stdio.h>
#include <ctype.h>

int main(){
    char alphabet;
    printf("Enter the alphabet: ");
    scanf("%c",&alphabet);

    if(islower(alphabet)){
        printf("It's a lowercase alphabet");
    }
    else{
        printf("It's a uppercase alphabet");
    }
    return 0;
}