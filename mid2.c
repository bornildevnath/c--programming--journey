#include<stdio.h>
void main()
{
    int lp;
    float vat , dc, dis, tc,tp;
    printf("Enter lp ");
    scanf("%d",&lp);
    vat = (7*lp)/100;
    dc = (2*lp)/100;
    dis = (5*lp)/100;
    tc = vat = dc;
    tp = lp + vat + dc - dis;
    printf("Total Price = %.2f\n",tp);
    printf("Total cost = %.2f",tc);

}
