#include<stdio.h>
int main() {
    printf("Enter the radius of the circle: ");
    float r, D,A, C;
    scanf("%f", &r);
    D = 2*r;
    A= (22/7)*r*r;
    C= 2*r*(22/7);
    printf("So the diameter of the circle is: %f", D);
    printf("So the area of the circle is: %f", A);
    printf("So the circumference of the circle is: %f", C);
    return 0;
}