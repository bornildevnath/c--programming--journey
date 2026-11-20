#include<stdio.h>
int main()
{
    int en , wh , salary;
    float aph;
    scanf("%d%d",&en,&wh);
    scanf("%f",&aph);
    printf("NUMBER = %d\n",en);
    printf("SALARY = U$ %.2f\n",wh * aph);
    return 0;
}
