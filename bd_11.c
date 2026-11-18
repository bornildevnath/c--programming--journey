#include <stdio.h>

void main()
{
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);


    printf("x = [%d]          y = [%d]\n", x, y);
    printf("Sum = [%d]        Difference = [%d]\n", x + y, x - y);
    printf("Product = [%d]    Division = [%d]\n", x * y, x / y);

    return 0;
}

