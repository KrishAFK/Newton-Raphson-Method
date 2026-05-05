/* NT01012 Procedural Programming	            */
/* Programming Assignment 3	                    */
/*						                        */
/* Question Number:	1 - Newton-Raphson Method   */
/* Name: Krish Jayantilal Shah 				    */
/* Date: 19/03/2026 				            */


#include <stdio.h>
#include <math.h> 

int main() {
    float e = 0.001;
    float x;
    float guess = 1.0;
    int i = 1; //Flag for while loop

 
    // Check for Positive Number
    if (scanf("%f", &x) != 1 || x < 0) {
        printf("Invalid input! Please enter a non-negative number.\n");
        return 1; 
    }

    // Perform the Newton-Rapshon Method
    while (i == 1) 
    {
        if (fabs((guess * guess) - x) < e) 
        {
            printf("%.6f\n", guess);
            i = 0; 
        } 
        
        else 
        {
            guess = (x / guess + guess) / 2.0;
        }
    }

    return 0;
}