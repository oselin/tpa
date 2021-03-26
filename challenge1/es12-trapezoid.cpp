/*Exercise - trapezoid
Write a small script (trapezoid.cc) that computes the area of a trapezoid having major base 
(mj) equal to 30 units, minor base (mb) equal to 12 and height (h) equal to 17. Print the resulting 
area. Try executing the script from a an IDE and from the terminal.

It should print Trapezoid area is:  357
*/


#include <math.h>
#include <iostream>
using namespace std;

int main(){

    int mj = 30;
    int mb = 12;
    int h = 17;

    float area = (mj+mb)*h/2;

    cout << "Trapezoid area is:  " << area << endl;

}