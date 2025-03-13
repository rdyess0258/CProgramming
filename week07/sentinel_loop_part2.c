#include <stdio.h>

// TODO no negative numbers should be accepted (except -1)
// consider the case with no grades entered

double avgStudentGradesSentinel(void);
double getGrade(void);

int main(void) {
    printf("%.2lf\n", avgStudentGradesSentinel());

    return 0;
}

double avgStudentGradesSentinel(void) {
    double grade = 0; // The current student grade
    double total_grade = 0;
    int n_grades = 0;

    while (grade != -1) { // -1 - sentinel value
        // Get the grade
        grade = getGrade();

        // Ignore -1 for the total grade
        if (grade >= 0) {
            // Add the scanned grade to the total grade
            total_grade += grade;
            n_grades++;
        }
    }

    if (n_grades == 0) {
        puts("No grades were entered!");
        return 0;
    }

    return total_grade / n_grades;
}

double getGrade(void) {
    // DO NOT return grades < -1 or greater then 100

    double grade;
    // Get the grade
    do {
        printf("Enter a grade (-1 to exit); ");
        scanf("%lf", &grade);
        if (grade < -1 || grade > 100) {
            puts("The grade should be in [-1; 100]");
        }
    } while (grade < -1 || grade > 100);


    return grade;
}