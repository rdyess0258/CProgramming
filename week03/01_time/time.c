/*
The program converts given number of seconds to HMS.

65 seconds -> 0 hours 1 minute 5 seconds

*/

#include <stdio.h>

    int main() {
    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    int remaining_seconds = 0;

    // Get the number of seconds
    puts("Enter the number of seconds");
    scanf("%d", &seconds);

    //Calculate number of minutes
    minutes = seconds / 60;

    // Calculate number of hours
    hours = seconds / 3600;

    //Calculate remaining seconds
    remaining_seconds = seconds % 60;

    //Print the result
    printf("%d seconds is %d hours, %d minutes and %d seconds\n",
        seconds, 
        hours,
        minutes, 
        remaining_seconds);
    
    //TODO by Thursday
    //calculate the number of hours

    return 0;

}