/*
    A function that prints a description based on the given temperature
*/

// Prototype
void temperatureDescription(double temp);

// Checks whether given number is in the range of [0;10]
void checkRange(int number);

int largest(int num1, int num2, int num3);

void main(){
    
}

//Implementation
void temperatureDescription(double temp){
    if(temp > 101){
        puts("High Fever");
    } 
    else if(temp > 99) {
        puts("Low Fever");
    } 
    else if(temp > 97) {
        puts("Normal");
    } else {
        puts("Low Temperature");
    }
}


void checkRange(int number) {
    if(number >= 0 && number <= 10 && number % 2 == 0) {
            puts("YES");
    }
    else {
        puts("NO");
    }
}

int largest(int num1, int num2, int num3){
    if(num1 > num2 && num1 > num3) {
        return num1;
    }
    else if(num2 > num1 && num2 > num3) {
        return num2;
    }
    else if(num3 > num1 && num3 > num2) {
        return num3;
    }
}