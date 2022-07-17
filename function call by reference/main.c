//Author: Akojede Peter
//Date: 5/23/2022
// called by reference means Address

#include <stdio.h>
#include <stdlib.h>

void fun (int*,int*); // for call by ref. we declare using a pointer
int main()
{
    int x=5,y=7;
    fun(&x,&y); //call by reference we use address &
    printf("inside main(calling function)\n");
    printf("x=%d y=%d\n",x,y); // we will not use address to print because of the value of x and y not declared as a pointer
}
void fun(int* x,int* y) //function by definition
{
    *x=7;
    *y=5;
    printf("inside fun(called function)\n");
    printf("x=%d y=%d\n",*x,*y); //call by refernce will change the value in the function calling, that is why we use ** and &&
}
