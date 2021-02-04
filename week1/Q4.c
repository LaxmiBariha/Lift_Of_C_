#include<stdio.h>
int main() {
    printf("Enter the marks of Physics, Chemistry, Biology, Mathematics, Computer : ");
    float p, c, b, m, co ;
    scanf("%f %f %f %f %f", &p, &c, &b, &m, &co);
    float percentage = (p+c+b+m+co)/5;
    if (percentage>=90){
        printf("\n YOU HAVE SCORED GRADE A.");
    }
    else if (percentage>=80){
        printf("\n YOU HAVE SCORED GRADE B.");
    }
    else if (percentage>=70 ){
        printf("\n YOU HAVE SCORED GRADE C.");
    }
    else if (percentage>=60 ){
        printf("\n YOU HAVE SCORED GRADE D.");
    }
    else if (percentage>=50){
        printf("YOU HAVE SCORED GRADE E.");
    }
    else  {
        printf("YOU HAVE SCORED GRADE F.");
    }
    return 0;
}