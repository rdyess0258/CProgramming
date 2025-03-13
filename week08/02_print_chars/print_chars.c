#include <stdio.h>

// TODO dont print AB BA duplicates only print first one

void printChars(void);

int main(void){

    printChars();
    return 0;
}

void printChars(void){
    char outer = 'A';
    while (outer <= 'Z') {
        char inner = 'A';
        while (inner <= 'Z') {
            if(outer != inner){
            printf("%c%c\n", outer, inner);
            }
            inner++;
        }
        outer++;
    }
}