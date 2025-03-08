#include <stdio.h>
#include <string.h>

int minimumNumber(int n, char* password) {
    // Define required character sets
    char* numbers = "0123456789";
    char* lower_case = "abcdefghijklmnopqrstuvwxyz";
    char* upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* special_characters = "!@#$%^&*()-+";
    
    // Flags to check existence of required character types
    int hasDigit = 0, hasLower = 0, hasUpper = 0, hasSpecial = 0;
    
    // Check password characters
    for (int i = 0; i < n; i++) {
        if (strchr(numbers, password[i])) hasDigit = 1;
        if (strchr(lower_case, password[i])) hasLower = 1;
        if (strchr(upper_case, password[i])) hasUpper = 1;
        if (strchr(special_characters, password[i])) hasSpecial = 1;
    }
    
    // Count missing character types
    int missingTypes = (!hasDigit) + (!hasLower) + (!hasUpper) + (!hasSpecial);
    
    // Ensure minimum length of 6
    return (n + missingTypes >= 6) ? missingTypes : (6 - n);
}

int main() {
    int n;
    char password[101]; // Assuming max length of password is 100
    
    scanf("%d", &n);
    scanf("%s", password);
    
    int result = minimumNumber(n, password);
    printf("%d\n", result);
    
    return 0;
}