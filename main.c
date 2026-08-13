#include <stdio.h>

int main() {
    float units, bill = 0;
    float firstSlab = 0, secondSlab = 0, thirdSlab = 0, fourthSlab = 0;

    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    // Input validation
    if (units < 0) {
        printf("\nInvalid input! Units cannot be negative.\n");
        return 1;
    }

    // Slab-wise bill calculation
    if (units <= 100) {
        firstSlab = units * 1;
        bill = firstSlab;
    }
    else if (units <= 200) {
        firstSlab = 100 * 1;
        secondSlab = (units - 100) * 2;
        bill = firstSlab + secondSlab;
    }
    else if (units <= 300) {
        firstSlab = 100 * 1;
        secondSlab = 100 * 2;
        thirdSlab = (units - 200) * 3;
        bill = firstSlab + secondSlab + thirdSlab;
    }
    else {
        firstSlab = 100 * 1;
        secondSlab = 100 * 2;
        thirdSlab = 100 * 3;
        fourthSlab = (units - 300) * 5;
        bill = firstSlab + secondSlab + thirdSlab + fourthSlab;
    }

    printf("\n================================\n");
    printf("        ELECTRICITY BILL\n");
    printf("================================\n");

    printf("\nUnits Consumed : %.0f\n", units);

    printf("\nSlab-wise Charges:\n");
    printf("First 100 units       : Rs. %.2f\n", firstSlab);
    printf("Next 100 units        : Rs. %.2f\n", secondSlab);
    printf("Next 100 units        : Rs. %.2f\n", thirdSlab);
    printf("Above 300 units       : Rs. %.2f\n", fourthSlab);

    printf("\nTotal Bill            : Rs. %.2f\n", bill);

    printf("\n================================\n");

    return 0;
}
