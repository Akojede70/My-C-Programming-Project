// Author: Akojede Peter
// Date: 5/23/2022
// function with no return type and no Argument

#include <stdio.h>
#include <stdlib.h>

void sum(); //function declaration

void main()
{
    sum(); //function calling
}
void sum() //function definition
{
    int x=5,y=7,sum=0;
    sum=x+y;
    printf("sum=%d",sum);
}
