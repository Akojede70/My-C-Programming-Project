// Author: Akojede Peter
// Date: 5/25/2022
// passing string as an Argument to a function

#include <stdio.h>
#include <stdlib.h>
void modify (char*,char*);

void main()
{
    char str1[]="jenny";
    char str2[]="Peter Bass";
    modify(str1,str2);
}

void modify (char* str1, char* str2)
{
    int i,l=0;
    for(i=0;str1[1])i='\0';i++)
    {
        l=l+1;
    }
    str2[1]='t';
    printf("length of string 1 is:%d\n",1);
    printf("both the strings are:%s %s",str1,str2);
}
