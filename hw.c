#include <stdio.h>

int main()
{
    float rice, sugar;

    printf("Enter price of 1 kg rice: ");
    scanf("%f", &rice);
    printf("Enter price of 1 kg sugar: ");
    scanf("%f", &sugar);

    printf("*** LIST OF ITEMS ***\n");
    printf("Item Price\n");
    printf("Rice Rs %.2f\n", rice);
    printf("Sugar Rs %.2f\n", sugar);

    return 0;
}
