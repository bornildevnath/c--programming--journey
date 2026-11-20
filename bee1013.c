#include<stdio.h>
//#include<stdlib.h>
int main()
{
    int a,b,c,maiorab,maior;
    scanf("%d%d%d",&a,&b,&c);
    maior = (a+b+abs(a-b))/2;
    maiorab = (maior+c+abs(maior-c))/2;
    printf("%d eh o maior\n",maiorab);
    return 0;
}
