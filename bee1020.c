#include<stdio.h>
int main()
{
    int Days,Day,Month,year;
    scanf("%d",&Days);
    year = Days / 365;
    Month = (Days % 365)/30;
    Day = (Days % 365) % 30;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",Month);
    printf("%d dia(s)\n",Day);
    return 0;
}
