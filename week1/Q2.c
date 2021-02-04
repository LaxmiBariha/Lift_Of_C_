#include<stdio.h>
int main() {
    printf("Enter the temperature in celcius: ");
    float t,fa;
    scanf("%f", &t);
    fa = (9*t)/5 + 32;
    printf("So the temperature in Fahrenheit is: %f", fa );
    return 0;
}