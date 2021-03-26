/*
Exercise - Triangle area
Compute the area of a triangle having base 120 units (b) and height 33 (h). Assign the result 
to a variable named area and print it. Your code should show Triangle area is: 120.0
*/


#include <iostream>
using namespace std;

int main(){

    float base = 120;
    float height = 33;

    float area = base*height/2;

    cout << "Triangle area is: " << area << endl;
}