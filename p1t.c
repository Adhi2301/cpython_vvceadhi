#include <stdio.h>

void serve_customer(int *candies_in_jar, int max_candies, int min_candies, int order) {
    // Check if the order is invalid
    if (order <= 0 || order > *candies_in_jar) {
        printf("INVALID INPUT\n");
        printf("NUMBER OF CANDIES LEFT : %d\n", *candies_in_jar);
        return;
    }

    // Update the number of candies in the jar after the sale
    *candies_in_jar -= order;
    printf("NUMBER OF CANDIES SOLD : %d\n", order);

    // If candies are less than or equal to the minimum threshold, refill the jar
    if (*candies_in_jar <= min_candies) {
        *candies_in_jar = max_candies;
    }

    // Display the updated number of candies in the jar
    printf("NUMBER OF CANDIES AVAILABLE : %d\n", *candies_in_jar);
}

int main() {
    int max_candies = 10;  // Maximum capacity of the jar
    int min_candies = 5;   // Minimum number of candies that must remain in the jar
    int candies_in_jar = max_candies;  // Initially, the jar is full

    int order;

    // Continuously take customer orders until an exit condition is met
    while (1) {
        printf("\nEnter the number of candies the customer wants to order (or 0 to exit): ");
        scanf("%d", &order);

        // Exit the program if the user enters 0
        if (order == 0) {
            break;
        }

        serve_customer(&candies_in_jar, max_candies, min_candies, order);
    }

    return 0;
}