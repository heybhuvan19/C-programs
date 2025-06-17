#include <stdio.h>

int main(){
    int radius;
    float area,volume;
    printf("Enter the radius of the circle");
    scanf("%d",&radius);
    area = 3.14*radius*radius;
    volume = 4/3*3.14*radius*radius*radius;
    printf("The area of the circle is %f\n",area);
    printf("The volume of the circle is %f\n",volume);
    return 0;
}