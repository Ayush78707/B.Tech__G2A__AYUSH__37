#include <stdio.h>

int main() {
    int choice;
    float kilometers, miles;

    printf("Unit Conversion Program\n");
    printf("1. Kilometers to Miles\n");
    printf("2. Miles to Kilometers\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter distance in kilometers: ");
        scanf("%f", &kilometers);
        miles = kilometers * 0.621371;
        printf("%.2f kilometers = %.2f miles\n", kilometers, miles);
    }
    else if (choice == 2) {
        printf("Enter distance in miles: ");
        scanf("%f", &miles);
        kilometers = miles * 1.60934;
        printf("%.2f miles = %.2f kilometers\n", miles, kilometers);
    }
    else {
        printf("Invalid choice! Please run the program again.\n");
    }

    return 0;
}
