#include <stdio.h>

int main(void)
{
    float a, b, c, x;

    printf("Enter a= ");
    scanf("%f",&a);
    printf("Enter b= ");
    scanf("%f",&b);
    printf("Enter c= ");
    scanf("%f",&c);
    x = a / (b - c);
    printf("%f", x);

}
