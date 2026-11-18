#include <stdio.h>

int main()
{
    float price, years, depreciation, salvage;// obosisto mullo

    printf("Enter purchase price: ");
    scanf("%f", &price);
    printf("Enter years of service: ");
    scanf("%f", &years);
    printf("Enter annual depreciation: ");
    scanf("%f", &depreciation);

    salvage = price - (depreciation * years);

    printf("Salvage value = %.2f\n", salvage);

    return 0;
}
