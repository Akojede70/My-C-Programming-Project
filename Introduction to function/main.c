/* Author: Akojede Peter, Date: 5/22/2022. */

#include <stdio.h>
#include <stdlib.h>

void sum () //function definition

{
    int a,b,sum=0;  /* Declaration of variables*/
    printf("Enter two  number:");
    scanf("%d%d",&a,&b);// the user enter two number here;
    sum=a+b; //the sum here will be effective and sum up
    printf("sum= %d\n",sum); /* the sum here make reference to the sum=a+b*/
    return 0;
}
void main() //function calling
{
    sum(); /* the execution always start from the function calling here, because of the word "sum here" will link with
              the word void sum, the compiler will now enter the function definition and execute every thing in the
              function definition body{} and return it back to the sum here(function calling). and move to the next printf*/
    printf("hello "); /* the compiler will then enter printf here and also link with the printf in function definition
                         body and then print out "hello Enter two number". The compiler will then return back printf
                         here in function calling and then move to the next line "sum".*/
    sum();    /* the sum here will be executed same way it was executed in the "sum" above, and the
                 compiler will now move to the next line "sum" */
    sum();    /* the "sum" here also will be executed same way it was executed in the "sum" above*/
}
