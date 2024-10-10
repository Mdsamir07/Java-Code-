#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random binary number
char* generate_random_binary() {
    static char binary[9]; // 8 bits for the binary number + 1 for null terminator
    int i;
    for (i = 0; i < 8; i++) {
        binary[i] = rand() % 2 + '0'; // Generating 0 or 1 and converting it to character
    }
    binary[8] = '\0'; // Null terminator
    return binary;
}

// Function to calculate parity of a binary number
char calculate_parity(char* binary) {
    int count_ones = 0;
    int i;
    for (i = 0; i < 8; i++) {
        if (binary[i] == '1') {
            count_ones++;
        }
    }
    return (count_ones % 2 == 0) ? 'even' : 'odd';
}

int main() {
    srand(time(NULL)); // Seed for random number generation
    int user_number;
    printf("Enter an integer: ");
    scanf("%d", &user_number);

    // Convert user input to binary
    char user_binary[9]; // 8 bits for the binary number + 1 for null terminator
    itoa(user_number, user_binary, 2);
    while (strlen(user_binary) < 8) {
        memmove(user_binary + 1, user_binary, strlen(user_binary) + 1);
        user_binary[0] = '0';
    }

    // Generate random binary number
    char* random_binary = generate_random_binary();

    printf("User Binary: %s\n", user_binary);
    printf("Random Binary: %s\n", random_binary);

    // Calculate parity for user input and random binary numbers
    char user_parity = calculate_parity(user_binary);
    char random_parity = calculate_parity(random_binary);

    printf("User Parity: %c\n", user_parity);
    printf("Random Parity: %c\n", random_parity);

    return 0;
}
