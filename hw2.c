#include<stdio.h>
void main()
{
    int id,serial,departmentcode,semester,year;
    printf("Enter ID: ");
    scanf("%d", &id);
    serial= id%1000;
    departmentcode=id/1000%100;
    semester= id/100000%10;
    year= id/1000000;

    printf("serial= %d\n",serial);
    printf("Department code= %d\n",departmentcode);
    printf("Semester= %d\n",semester);
    printf("Year= %d\n",year);

}
