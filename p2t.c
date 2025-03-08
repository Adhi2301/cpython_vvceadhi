#include <stdio.h>

void estimate_time(int weight) {
    // Check for invalid input
    if (weight < 0 || weight > 7000) {
        printf("INVALID INPUT\n");
        return;
    }

    // Handle overload case
    if (weight > 7000) {
        printf("OVERLOADED\n");
        return;
    }

    // Time estimates based on weight
    if (weight == 0) {
        printf("Time Estimated: 0 minutes\n");
    }
    else if (weight > 0 && weight <= 2000) {
        printf("Time Estimated: 25 minutes\n");
    }
    else if (weight > 2000 && weight <= 4000) {
        printf("Time Estimated: 35 minutes\n");
    }
    else if (weight > 4000 && weight <= 7000) {
        printf("Time Estimated: 45 minutes\n");
    }
}

int main() {
    int weight;

    // Prompt for input
    printf("Enter the weight of clothes (0-7000 grams): ");
    scanf("%d", &weight);

    // Call the function to estimate time
    estimate_time(weight);

    return 0;
}