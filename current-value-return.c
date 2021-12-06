//
//  main.c
//  S3
// ADDED TO GITHUB on 10/19/21

//  Created by Alejandra Perez Hernandez on 10/18/21.
//
/* RIO = Current Value of investment - cost of Investment/cost of Investment *100
 Return on Investment : measure used to evaluate the efficiency of an investment
*/

#include <stdio.h>

int main(void) {
    // insert code here...
    int profit = 0;
    int expense = 0;
    int roi=0;
    
    // User input data
    printf("Enter your profit:\n");
    scanf("%d", &profit);
    printf("Enter your expense:\n");
    scanf("%d", &expense);
    
    // Operation to find the ROI
    roi =(100 * (profit-expense)/expense);
   if (roi >=0){
     printf("Total of ROI=%d\n", roi);
   }
    return (0);
}
