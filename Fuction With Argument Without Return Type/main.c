// Author: Akojede Peter, function with Argument without Return Type. Date: 5/24/2022.
#include <stdio.h>
#include <stdlib.h>
void sum(float,float); //function Declaration with parameter
void main() //function calling
{
    float x,y;
    printf("Enter two Decimal Number\n");
    scanf("%f%f",&x,&y);
    sum(x,y); // function calling with argument, If we pass a static value here sum(2.3,5.1) d value here will be executed
    // If we pass a static value here sum(2.3,5.1) it is the value here that will be executed
    // The execution will start from the function calling i.e. the void main.
    // The value entered in the scanf will stay in the "sum (x,y)", the lines of codes written {}is called d function body.
    // The value that stays in sum (x,y) will now pass it to float a, and float b
}
void sum (float x, float y) // function definition with parameter"Data type (float) and Data name(x,y)"
                            // we can also use any alphabet in the data name e.g float (a) float (b),
                            // not necessarily it should be float (x) and float (y), because we use sum (x,y).
{
    float s=0;
    s=x+y;
    printf("sum=%f",s);
    // this is where the word sum will take effect, by summing the two number we entered. i.e. s=x+y
    // after function definition has been executed the value will then be return to sum(x,y) in function calling.
    // nothing to be execute again, then the value will then show in the screen.
    // we can also write printf("sum=%f",x+y) if we cancel out the first two line of code in the function definition.
}

