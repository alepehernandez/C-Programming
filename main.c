/*

Write a C program that finds the area of a triangle. The user would input the number in the terminal, using scanf to read the given input.
Users input the base and height, and the calculation of the area is given to the user. 

*/


#include <stdio.h>
int main() {
    // declare 
    double base=0;
    double height = 0;
  // Ask user to input
    printf("Enter the base of the triangle:\n");
    scanf("%lf",&base);
  // Ask user for the heigh
    printf("Enter the height of the triangle:\n");
    scanf("%lf",&height);
    // calculation to find the area
    double area = base * height/2.0;
    printf("The triangle area is = %f\n", area);
    return 0;
}
