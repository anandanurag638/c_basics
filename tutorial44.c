#include <stdio.h>

// Define a structure to represent a driver
struct Driver {
    char name[50];
    char license_no[20];
    char route[50];
    float kms_driven;
};

int main() {
    int n;
    
    // Ask user for the number of drivers
    printf("Enter the number of drivers: ");
    scanf("%d", &n);

    // Create an array of structures to hold information for n drivers
    struct Driver drivers[n];

    // Input details for each driver
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Driver %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]s", drivers[i].name);
        printf("License Number: ");
        scanf(" %[^\n]s", drivers[i].license_no);
        printf("Route: ");
        scanf(" %[^\n]s", drivers[i].route);
        printf("Kilometers Driven: ");
        scanf("%f", &drivers[i].kms_driven);
    }

    // Print details of all drivers
    printf("\nDriver Details:\n");
    printf("--------------------------------------------------------------------\n");
    printf("| %-20s | %-15s | %-20s | %-10s |\n", "Name", "License No", "Route", "Kms Driven");
    printf("--------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| %-20s | %-15s | %-20s | %-10.2f |\n", drivers[i].name, drivers[i].license_no, drivers[i].route, drivers[i].kms_driven);
    }
    printf("--------------------------------------------------------------------\n");

    return 0;
}
