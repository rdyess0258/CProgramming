/*
Practice with non-void functions
*/

#include <stdio.h>

// Function prototypes
// The function named getFive which returns an integer and takes no arguments
int getFive(void);

// Function named printCourse which returns nothing and 
// takes one integer argument
void printCourse(int course_number);

// Void function that takes an integer and describes the weather
void describeWeather(int temp);

// The function that converts the given number of miles to kilometers
double milesToKms(int miles);

// The function that converts the given number of kms to m
double kmsToMiles(int kms);

int main(void){
    int var = 0;

    //Call getFive function
    var = getFive();

    printf("var is %d\n", var);

    //Call printCourse
    printCourse(var);

    // Test decribeWeather
    int temp = 0;
    printf("Enter a temperature: ");
    scanf("%d", &temp);
    describeWeather(temp);

    // Test milesToKms
    int miles = 0;
    printf("Enter number of miles: ");
    scanf("%d", &miles);
    milesToKms(miles);
    printf("There are %f kilometers in %d miles.\n", milesToKms(miles), miles);

    // Test kmsToMiles
    int kms = 0;
    printf("Enter number of kilometers: ");
    scanf("%d", &kms);
    double kmsTM = kmsToMiles (kms);
    printf("There are %f miles in %d kilometers.\n", kmsTM, kms);


    return 0;
}

// getFive implementation
int getFive(void){
    int five = 5;

    return five;
}

/******************************/
void printCourse(int course_number){
    printf("You are in COP%d course.\n", course_number);
}

/******************************/
void describeWeather(int temp){
    // if statement
    if (temp > 70) {
        puts("HOT");
    }
    if (temp <= 70) {
        puts("COLD");
    }
}

/******************************/
double milesToKms(int miles){
    double kms = miles * 1.609;

    return kms;
}

double kmsToMiles(int kms){
    double miles = kms / 1.609;

    return miles;

}