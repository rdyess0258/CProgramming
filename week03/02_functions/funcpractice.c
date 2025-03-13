
#include <stdio.h>

// Function prototypes
void two(void);
void one_three(void);

int main(void){
    puts("Starting now:");
    one_three();
    puts("Done!");
}

void two(void){
    puts("Two");
}

void one_three(void){
    puts("One");
    two();
    puts("Three");
}
