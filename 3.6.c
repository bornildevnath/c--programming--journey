#include <stdio.h>

void main()
{
    float price, bill, vat, service, total;
    int quantity;

    printf("Enter price of one item: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    vat_rate = 0.15;
    service_rate = 0.15;

    bill = price * quantity;
    vat = bill * vat_rate;
    service = bill * service_rate;
    total = bill + vat + service;

    printf("\n----- RESTAURANT BILL -----\n");
    printf("Bill    = %.2f\n", bill);
    printf("VAT     = %.2f\n", vat);
    printf("Service = %.2f\n", service);
    printf("Total   = %.2f\n", total);

    return 0;
}
