// Author: Akojede Peter
// Date: 5/24/2022
// Practice Question in C programming

#include <stdio.h>
#include <stdlib.h>

int jumble (int x, int y)
{
    x=2*x+y;
    return x;
}

int main()
{
    int x=2, y=5; //function calling the execution statrt from here
    y=jumble(y,x);// y =5 and x=2 here, it will then move up the function definition
    // the value will change x=5 and y=2
    // it will then enter x and be executed x=2(5)+2=12
    // x=12 and will be return to the jumble (function calling) were it went out
    // y =jumble, i.e. y will now be 12 y=12
    x=jumble(y,x); // then unto x; here y=12, x=2
    // the value will go to the function definition up and change x=12, and y=2
    // it will then enter x and be executed x=2(12)+2=26 i.e x=26
    // x=26 and will be return to the jumble (function calling) were it went out
    // x =jumble, i.e. x will now be 26 x=26
    printf("%d\n",x); // printf x=26 will now be executed and be printed
    return 0; // we have to return a  value which is 0; since we have int at the "int main".
}
