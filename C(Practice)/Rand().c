#include <stdio.h>
#include <stdlib.h>

int main() {
    int user_number, random_number;

    // Generate a random number
    random_number = rand();

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &user_number);

    // Compare the user number with the random number
    if (user_number > random_number) {
        printf("Your number (%d) is greater than the random number (%d).\n", user_number, random_number);
    } else if (user_number < random_number) {
        printf("Your number (%d) is smaller than the random number (%d).\n", user_number, random_number);
    } else {
        printf("Your number (%d) is equal to the random number (%d).\n", user_number, random_number);
    }

}

