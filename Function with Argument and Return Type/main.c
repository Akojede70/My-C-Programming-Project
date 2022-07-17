// Author: Akojede Peter
// Date: 5/24/2022
// Title: Function with Argument and Return Type

#include <stdio.h>
#include <stdlib.h>

int sum(int,int); //function declaration
// because we are including return we need to include a data type "int", it cant be void.

void main()
{
    int x,y,c;
    printf("Enter a value of X and Y\n");
    scanf("%d%d",&x,&y);
    c=sum(x,y);// the value enter in the scanf will be in sum(x,y) and then enter function definition
    printf("sum=%d",c); // after it has been return to the sum it will then be executed
}
int sum (int a,int b) // the sum of the function calling will enter here, because of the function definition has been declare has sum also
//different alphabet can be use, and also same alphabet can be use e.g sum(x,y) and int a, int b.
{
    return a+b; // the return will return the value of a+b to the sum in the function calling
}
