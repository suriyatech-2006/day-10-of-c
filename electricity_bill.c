#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid units!\n");
        return 1;
    }

    // Tariff slabs
    if (units <= 100) {
        bill = units * 1.5;          // Rs. 1.50 per unit for first 100
    }
    else if (units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2.5;   // Rs. 2.50 for next 100
    }
    else if (units <= 300) {
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;  // Rs. 4.00 for next 100
    }
    else {
        bill = 100 * 1.5 + 100 * 2.5 + 100 * 4.0 + (units - 300) * 5.0;  // Rs. 5.00 above 300
    }

    printf("Electricity Bill for %d units = Rs. %.2f\n", units, bill);

    return 0;
}
