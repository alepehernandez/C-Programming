// Write a C program that inputs the student's score. Display wheter a student passed or failed an exam or the class, using IF-Then-Else

#include <stdio.h>

int main() {
    int score;
    // Get the student's score
    printf("Input the student's score:");
    scanf("%d", &score);
    
    // If the score is greater than or equal 59, print "passed. Otherwise, print"failed"
    if(score >=59){
        printf("%d Passed\n", score);
    }
    else
        printf("%d Failed.\n", score);
    return 0;
}