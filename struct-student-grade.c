//
//  main.c
//  EX17-1
//
//  Created by Alejandra Perez Hernandez on 11/17/21.
// okay versio 

#include <stdio.h>
struct Student {
    char name[5];
   int grade[3];
} s[5];
int main() {
    int i = 0;
    float sum=0;
    float avg, highest=0;

    struct Student student1;
    student1.grade[0]=80;
    student1.grade[1]=90;
    student1.grade[2]=85;
    
    for (i=0;i<3;i++){
        sum+=student1.grade[i];
        if(student1.grade[i]>highest)
            highest =student1.grade[i];
    }
    avg = sum / 3.0;
    printf("The Average Mark is %5.2f \n", avg);
    printf("The Highest Mark is %5.2f \n", highest);
    
    return 0;
}
