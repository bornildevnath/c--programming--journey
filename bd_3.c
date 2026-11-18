#include<stdio.h>
void main()
{
    int bd,pd,a,s,m,d,md;
    printf("Enter the First Number: ");
    scanf("%d",&bd);
    printf("Enter the Second Number: ");
    scanf("%d",&pd);
    a=bd+pd;
    s=bd-pd;
    m=bd*pd;
    d=bd/pd;
    md=bd%pd;
    printf("%d\n",a);
    printf("%d\n",s);
    printf("%d\n",m);
    printf("%d\n",d);
    printf("%d\n",md);
}
