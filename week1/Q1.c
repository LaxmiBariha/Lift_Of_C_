#include<stdio.h>
int main()
{
    printf("Enter two numbers: ");
    int a,b;
    scanf("%d %d", &a, &b );
    int s = a+b;
    int sub = a-b;
    int m = a*b;
    int d = a/b;
    printf("The Addition is: %d ", s );
    printf("The Subtraction is:%d", sub);
    printf("The multiplication is: %d", m );
    printf("The Division is: %d", d );
    return 0;
}
