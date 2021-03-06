
 //Author: Akojede Peter
 //Date: 4/12/2022

#include <stdio.h>
#include <stdlib.h>

int gcd (int u, int v);
float absoluteValue(float x);

int main()
{
    int result = 0;

    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int   i1 = -716;
    float absoluteValueResult = 0.0;

    result = gcd(150,35);
    printf("The gcd of 150 and 35 is %d\n", result);

    result = gcd(1026,405);
    printf("The gcd of 1026 and 405 is %d\n", result);


    printf("The gcd of 83 and 240 is %d\n\n\n\n", gcd(83, 240));

    /* testing absolute Value Function */
    absoluteValueResult = absoluteValue (f1);
    printf ("result = %.2f\n", absoluteValueResult);
    printf ("f1 = %.2f\n", f1);

    absoluteValueResult = absoluteValue (f2) + absoluteValue (f3);
    printf ("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue ( (float) i1);
    printf ("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue (i1);
    printf ("result = %.2f\n", absoluteValueResult);

    printf ("%.2f\n", absoluteValue (-6.0) /4);


    return 0;

}

int gcd (int u, int v)
{
    int temp;

    while(v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}

float absolutevalue(float x)
{
    if (x < 0)
        x = -x;

    return x;
}





