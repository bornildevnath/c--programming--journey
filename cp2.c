#include<stdio.h>
void main()
{
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    (a>0)? printf("Positive"):(a<0)?printf("Negative"):
        (a==0)?printf("Zero"):printf("Invalid");


}
