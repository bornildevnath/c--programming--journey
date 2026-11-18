#include<stdio.h>
void main()
{
    int a = 15 , b = 5 ;
    int x , y, z;
    x = a++ + b*2;
    y = ++a + b;
    z = a + --b;
    printf("%d\n%d\n%d",x,y,z);
}
