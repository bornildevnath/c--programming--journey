#include<stdio.h>
void main()
{
    int m;
    printf("Enter Mark: ");
    scanf("%d",&m);
    (m > 39)? printf("Pass\n"):printf("Fail\n");

    (m>=80)&&(m<=100)?printf("A+"):
    (m>=75)&&(m<80)?printf("A") :
    (m>=70)&&(m<75)?printf("A-"):
    (m>=65)&&(m<70)?printf("B+"):
    (m>=60)&&(m<65)?printf("B") :
    (m>=55)&&(m<60)?printf("B-"):
    (m>=50)&&(m<55)?printf("C+"):
    (m>=45)&&(m<50)?printf("C") :
    (m>=40)&&(m<45)?printf("D") :
        printf("F");

}
