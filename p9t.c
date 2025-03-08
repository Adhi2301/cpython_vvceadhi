#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(char* s) {
    int count = 1; // Start with 1 because the first word is always lowercase
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) { // Check for uppercase letters
            count++;
        }
    }
    
    return count;
}

int main() {
    char s[100000]; // Assuming a large enough input size
    scanf("%s", s); // Read input string

    int result = camelcase(s);

    printf("%d\n", result); // Print the result

    return 0;
}