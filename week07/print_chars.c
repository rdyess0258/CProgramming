#include <stdio.h>

int main(void) {
    //Get the uppercase character
    char input;
    do {
        printf("Enter an uppercase character: ");
        scanf(" %c", &input);
    } while (input < 'A' || input > 'Z');

    // Get the positive integer
    int number;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0);

    // Print the scanned char the scanned integer number of times (for loop)
    // A
    // 5
    // AAAAA

    for (int i = 1; i <= number; i++) {
        printf("%c", input);
    }

    // TODO
    // Scan a second character which should be either * or # and nothing else.
    // Print the pattern
    // B*B*B*B*B*
    // Advanced pattern B**BB**BB*


    return 0;
}