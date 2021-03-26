/*
Exercise - hypotenuse
Write a small script to compute the length of the hypotenuse (c) of a right triangle having 
sides a=133 and b=72 units (see picture below). It should print exactly 
Hypotenuse:  151.23822268196622
*/


#include <iostream>
#include <iomanip>
using namespace std;

#include <cmath>

int main(){

    float a = 133.0f;
    float b = 72.0f;

    float hypotenuse = sqrt(pow(a,2) + pow(b,2));

    cout << "THe hypotenuse is " << setprecision(17) << hypotenuse << endl;

}


