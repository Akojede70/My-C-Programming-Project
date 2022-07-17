// Author: Akojede Peter
// Date: 5/23/2022
// function without Argument but with Return Type

#include <stdio.h>
#include <stdlib.h>

int sum(void); //function Declaration

void main() //function calling
{
    int s;
    s=sum(); // you cant't pass an argument here, because of the word void in function declaration
    printf("sum=%d",s);
}
int sum() //function definition
{
    int a=5,b=7,sum=0;
    sum=a+b;
    return sum;
    //any code after return will not print
    // if we write return "sum,a,b" it will only return b the last thing you write
    // we can also cancel sum and use a+b e.g return a+b
}

// study this code

// char sum(void); // function declaration
//
//void main() //function callling
//{
//    char s;
//    s=sum()
//    printf("sum=%c",s);
//}
//char sum()  //function definition
//{
//    int a=5,b=7,sum=0;
//    sum=a+b;
//    return 'a'; // it only return "a" the character value
//}   The output of the code is "sum=a"







