#include<stdio.h>
void main()
{
    int a , b , c;
    printf("Enter Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

   (a<b)?(a<c)? printf("a is smallest") : printf("c is smallest") :
   (b<c)? printf("b is smallest"): printf("c is smallest");
}
