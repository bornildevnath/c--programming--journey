#include<stdio.h>
int main()
{
    char name;
    double salary,sell,ts;
    scanf("%s",&name);
    scanf("%lf%lf",&salary,&sell);
    ts = (sell*15)/100;
    printf("TOTAL = R$ %.2lf\n",(ts+salary));
    return 0;
}
