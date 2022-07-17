// Author: Akojede Peter
// Date: 5/24/2022
// Practice Question 4

#include <stdio.h>
#include <stdlib.h>

void f(int*p, int m) //since it is addredd(call by reference) we are making use of a pointer
{
    m = m + 5;
    *p = *p + m;
    return;
}

void main()
{
    int i=5, j=10;
    f(&i,j); // the &i store Address making it call by reference and j= call by value
    printf("%d",i+j);

    // no need of return because we have "void main"
}
//execution start from &i=5, and j=10; and move up to the void f int*p=5, and int m=10; m will now be 15
// *P will be 5+15 making 20; 20 will be return to f; the *p will be replace as address &i which is 20 and will be return to f
// 20 + j(10) =30 will now be printed
