/* Author: Akojede Peter
Purpose: This program is going to calculate the area of a rectangle
Date: 4/9/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    //declaring variables
    double width = 32.3;
    double height = 15.3;
    double perimeter = 0.0;
    double area = 0.0;


    //performing perimeter calculation
    perimeter = 2.0 * (height + width);
    area = width * height;

    //displaying input
    printf("width is = %.2f, height is = %.2f, perimeter is = %.2f\n", width, height, perimeter);
    printf("area is = %f\n", area);

    return 0;
}
