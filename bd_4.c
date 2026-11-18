#include<stdio.h>
void main()
{
    int bp,sp,p,per;
    printf("Enter Product Price: ");
    scanf("%d",&bp);
    printf("Enter Sell Price: ");
    scanf("%d",&sp);
    p=sp-bp;
    per=(p*100)/bp;
    printf("Your Profit is: %d\n",p);
    printf("%d %% profit in one product",per);
}
