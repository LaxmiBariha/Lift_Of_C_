#include<stdio.h>
int main() {
    float p, c, b, m, co,  percentage ;
    printf("Enter the marks of Physics, Chemistry, Biology, Mathematics, Computer : ");
     
    scanf("%f %f %f %f %f", &p, &c, &b, &m, &co);
    percentage = ((p+c+b+m+co)*100)/350 ;
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
        printf("\n YOU HAVE SCORED GRADE E.");
    }
    else  {
        printf("\n YOU HAVE SCORED GRADE F.");
    }
    return 0;
}
