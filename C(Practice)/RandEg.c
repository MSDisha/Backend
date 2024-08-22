#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate two random numbers
    int num1 = rand();
    int num2 = rand();

    // Print the generated numbers
    printf("Random number 1: %d\n", num1);
    printf("Random number 2: %d\n", num2);

    // Compare the numbers
    if (num1 > num2) {
        printf("Number 1 (%d) is greater than Number 2 (%d)\n", num1, num2);
    } else if (num1 < num2) {
        printf("Number 1 (%d) is smaller than Number 2 (%d)\n", num1, num2);
    } else {
        printf("Number 1 (%d) is equal to Number 2 (%d)\n", num1, num2);
    }

    return 0;
}

