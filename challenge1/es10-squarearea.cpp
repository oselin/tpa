/*
Exercise - square area
Compute the area of a square having side (s) equal to 145 units. Assign the result to a 
variable named area and print it, it should show Square area is: 21025
*/
#include <math.h>
#include <iostream>
using namespace std;

int main(){

    int side = 145;
    int area = pow(side,2);

    cout << "Square area is: " << area << endl;
}