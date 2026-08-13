#include <stdio.h>

int main() {
    float units, bill = 0;

    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    if (units <= 100) {
        bill = units * 1;
    }
    else if (units <= 200) {
        bill = (100 * 1) + ((units - 100) * 2);
    }
    else if (units <= 300) {
        bill = (100 * 1) + (100 * 2) + ((units - 200) * 3);
    }
    else {
        bill = (100 * 1) + (100 * 2) + (100 * 3)
             + ((units - 300) * 5);
    }

    printf("\nElectricity Units : %.2f", units);
    printf("\nTotal Bill        : Rs. %.2f\n", bill);

    return 0;
