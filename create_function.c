#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

double add(double a, double b)       //create a simple function
{
    double c;

    c = a + b;

    return c;
}

int main()
{
    double a, b, c;

    a = 1000;
    b = 2000;
    c = 0;

    assert(c != a + b);     //The pre-assertion
    c = add(a,b);
    assert(c == a + b);     //The post-assertion

    printf("Hello world! \n%le \n", c);      //Output the computation results

    return 0;
}
