#include<stdio.h>
void main()
{
    float num1, num2;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Result = %.2f", num1+num2);
            break;

        case '-':
            printf("Result = %.2f", num1-num2);
            break;

        case '*':
            printf("Result = %.2f", num1*num2);
            break;

        case '/':

        if(num2 != 0)
        {
            printf("Result = %.2f", num1/num2);
        }
        else
        {
        printf("Division by zero is not possible");
        }
    break;
    }

}
