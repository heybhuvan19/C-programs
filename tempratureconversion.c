#include <stdio.h>

//celcius to fahrenheit
int main(){
    float cel,fahren;
    printf("Enter the temperature in celcius\n");
    scanf("%f",&cel);
    fahren = cel*9/5+32;
    printf("Temprature in fahrenheit is %f\n",fahren);
    return 0;
}

//fahrenheit to celcius
int main(){
    float cel,fahren;
    printf("Enter the temperature in fahrenheit");
    scanf("%f",&fahren);
    cel = (fahren-32)*5/9;
    printf("Temprature in Celcius is %f",cel);
    return 0;
}
