/*
Exercise - area from input
Modify the program at previous point to acquire the side s from the user at runtime.

Try also to put the two previous scripts in two separate files (e.g. TriangleArea.cc and 
SquareArea.cc and execute them from the terminal)
*/

#include <math.h>
#include <iostream>
using namespace std;

int main(){

    int side;

    cout << "Inserire lato quadrato (solo numeri positivi!): ";
    cin >> side;
    int area = pow(side,2);

    cout << "Square area is: " << area << endl;

}