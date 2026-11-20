#include<stdio.h>
int main()
{
    int p1,p2,amount1,amount2;
    double price1,price2, ts;
    scanf("%d%d%lf",&p1,&amount1,&price1);
    scanf("%d%d%lf",&p2,&amount2,&price2);
    ts = (amount1*price1)+(amount2*price2);
    printf("VALOR A PAGAR: R$ %.2lf\n",ts);
    return 0;

}
