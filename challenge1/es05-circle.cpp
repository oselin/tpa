/*
Exercise - circle

Calculate the area of a circle at the center of a soccer ball (radius = 9.1m), remember that 
area = pi * r^2

Your code should print as result 263.02199094102605

display with printf
*/

#include <math.h>
#include <iostream>
using namespace std;


int main(){

    long double radius = 9.1;

    long double area = M_PI * pow(radius, 2);

    printf ("%.15Lf\n",area);
}