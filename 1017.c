#include<stdio.h>
int main()
{

    float f,speed, time;
    scanf("%f%f",&time,&speed);
    f = (speed/12)*time;
    printf("%.3f\n",f);
    return 0;
}
