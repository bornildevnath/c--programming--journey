#include<stdio.h>
void main()
{
    int n , digit;
    printf("Enter floating Number: ",n);
    scanf("%d",&n);
    digit = n % 100;
    printf("Result is = %d",digit);
}
