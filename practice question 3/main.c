// Author: Akojede Peter
// Date: 5/24/2022
// Practice Question 3

#include <stdio.h>
#include <stdlib.h>

int r()
{
    static int num=7;
    return num--; // the number first before the decrease sign --
}

int main()
{
    for(r();r();r()) //execution start from here
    printf("%d",r());
    return 0;
}

// execution start from the for first r() and move up to the int r() and return number 7 to the firs r() after return
// it will then reduce to 6, the second r() will go up again and return the 6 value to the second r() it will then reduce to 5
//it will then enter the printf r() and return 5(it will be printed and executed), it will then reduce to 4,
// the 4 will be return to the 3rd r() in for line and then will reduce to 3.
// 3 will be return to the second r() in for,and reduce  to 2, 2 will now be return to the r() in printf and also be executed
// it will then now reduced to 1, 1 will now be returned to the third r() in for line and reduced to 0,
// 0 will be returned to the second r() in for and it will now exit (it is false)
// Therefore 5,2 will now be printed, because that is what return in the printf
