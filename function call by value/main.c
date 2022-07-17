// Author: Akojede Peter
//Date: 5/23/2022
// call by value in function

#include <stdio.h>
#include <stdlib.h>

 void fun (int,int); //function declaration

void main() //function calling
{
    int x=5, y=7;
    fun(x,y);
    printf("inside main(calling function)\n");
    printf("x=%d y=%d\n",x,y);
}
void fun(int x,int y) //function definition
{
    x=7;
    y=5;
    printf("inside fun(calling function)\n");
    printf("x=%d y=%d,\n",x,y);
}
