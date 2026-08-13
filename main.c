#include <stdio.h>

int main() {
    float units, bill = 0;

    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    // Input validation
    if (units < 0) {
        printf("\nInvalid input! Units cannot be negative.\n");
        return 1;
    }

    // Slab-based bill calculation
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

    printf("\n================================\n");
    printf("     ELECTRICITY BILL\n");
    printf("================================\n");

    printf("\nUnits Consumed : %.0f\n", units);
    printf("Total Bill     : Rs. %.2f\n", bill);

    printf("\n================================\n");

    return 0;
}
