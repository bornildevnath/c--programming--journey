#include<stdio.h>
void main()
{
    float s,u,t,g = 9.8;
    printf("Enter u , t : ");
    scanf("%f%f",&u,&t);
    s = u*t + 0.5 * t * t;
    printf("travelled distance = %.2f ",s);

}
