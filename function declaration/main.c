// Author: Akojede Peter
// Date: 5/23/2022

#include <stdio.h>
#include <stdlib.h>
// we are not getting an Integer that is why we declare char, if we were getting/using value as integer not necessary for declaration
char fun(); //float sum(void);// function declaration

void main()
{
    char ch; // declaring ch as variable
    ch=fun();
    printf("ch=%c",ch);

    //sum(); //function calling
}
char fun() //function definition
{
    char c; //declaration of variables, the c means one alphabet
    printf("enter a character:");
    scanf("%c",&c);
    return c;
}
