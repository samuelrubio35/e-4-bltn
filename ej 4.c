#include <stdio.h>
#include <stdlib.h>

int main()
{
    short s = -4;
    unsigned short us = 10;
    int i = 70;
    unsigned u= 101;
    long l = -480;
    unsigned long ul = 15000;
    float f = 4.7;
    double d = -11.767;
    long double ld = 168.545;
    char c = 'j';



     i = 9/4.0;
     printf("%d\n", i); //lo trunca
     f = us * (d - 2);
     printf("%f\n", f);
     //s = (u + d) % l;
     printf("%bd\n", s);
     ul = s + c;
     printf("%lu\n", ul);
     ld = (f / u) + 9;
     printf("%lf\n", ld);
     f = d * (us - 3);
     printf("%f\n", f);
     c = u*s/d;
     printf("%c\n", c);
     f = 7.5*i;




     printf("%f\n", f);


    //


    return 0;
}
