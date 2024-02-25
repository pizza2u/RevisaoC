#include <stdio.h>
#include <limits.h>

int main() {
    int prev = INT_MIN; // Initialize prev to the smallest possible integer
    int current;

    while (scanf("%d", &current) != EOF) {
        if (current > prev) {
            prev = current; // Update prev if the current number is valid
        } else {
            // If the current number is not valid, output the next smallest valid number
            printf("%d\n", prev + 1);
            // Consume the remaining input until EOF
            while (getchar() != EOF); // Ignore the invalid input
            break; // Exit the loop
        }
    }

    return 0;
}
