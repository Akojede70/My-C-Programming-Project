// Author: Akojede Peter
// Date: 5/24/2022
// Title: Practice Question in function

#include <stdio.h>
#include <stdlib.h>

int incr(int i)
{
    // static will hold previous value and it is not going to be re-initialized
    static int count=0; //count means to hold a value down
    count =count+i;
    return (count);
}
int main()
{
    int i,j; // the execution start from here
    for(i=0;i<=4;i++) // i=0, 1, 2, 3, 4  it is less than 4, it will enter (incr i down)
        j=incr(i); // the incri i will move to it function definition
        // the count is 0 and i =0 so zero will be printed first
        // i will increase to 1 and count is 0 i.e. count(0) 0+(i=1) count will now be 1
        // i will increase to 2 and count is 1 i.e. count(1) 1+(i=2) count will now be 3
        // i will increase to 3 and count is 3 i.e. count(3) 3+(i=3) count will now be 6
        // i will increase to 4 and count is 6 i.e. count(6) 6+(i=4) count will now be 10
        // The value of count will be return to j were it was coming from.
    printf("j=%d",j); // will now be executed and printed
    return 0;
}
