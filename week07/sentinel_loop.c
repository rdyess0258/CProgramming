#include <stdio.h>

double avgStudentGradesSentinel(void);

// TODO don't count -1 as a grade
// TODO don't divide by 0
// Create another function which will get the grade

int main(void) {
    printf("%.2lf\n", avgStudentGradesSentinel());

    return 0;
}

double avgStudentGradesSentinel(void){
    double grade = 0;
    double total_grade = 0;
    int n_grades = 0;
    while (grade != -1) { // -1 - sentinel value
        // Get the grade
        printf("Enter the grade (-1 to exit): ");
        scanf("%lf", &grade);
        
        // Get the total
        if (grade >=0){
        total_grade += grade;
        n_grades++;
        }

        if (grade == -1){
            break;
        }

        if (n_grades == 0){
            puts("No grades have been entered.");
            return 0;
        }
    }

    return total_grade / n_grades;
}