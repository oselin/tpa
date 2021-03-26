/*
Exercise - fractioning
Write some code to calculate the value of the following formula for x = 0.000003, 
you should obtain 2.753278226511882

display with printf
*/


#include <math.h>
#include <iostream>
using namespace std;

int main(){

    long double x = 0.000003;

    long double out = -sqrt(x+3)/(pow((x+2),3)/log(x));

    printf ("%.15Lf\n",out);

}