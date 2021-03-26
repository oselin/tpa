/*
Exercise - quadratic
Write some code to calculate the zeroes of the equation 

    ax^2 -b = 0

Show numbers with 20 digits
NOTE: since we have float numbers, digits after 6 may not be really significative
At the end check that by substituting the value obtained x into the equation you actually 
obtain zero (or a neighborhood of it!)

Example - given:
    float a = 11.0
    float b = 3.3
    after your code it must print:

    11.0 * x**2 - 3.3 = 0 for x1 = 0.54772251844406127930
    11.0 * x**2 - 3.3 = 0 for x2 = -0.54772251844406127930
    0.54772251844406127930 is a solution? true
    -0.54772251844406127930 is a solution? true
*/

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main(){

    float a = 11.0f;
    float b = 3.3f;

    float x1 = sqrt(4*a*b)/(2*a);
    float x2 = -sqrt(4*a*b)/(2*a);

    cout << a << " * x**2 - " << setprecision(2) <<  b <<" = 0 for x1 = " << setprecision(20) << x1 << endl;
    cout << a << " * x**2 - " << setprecision(2) <<  b <<" = 0 for x2 = " << setprecision(20) << x2 << endl;

    bool res1 = abs(a*pow(x1,2) - b)<=0.0001;
    bool res2 = abs(a*pow(x2,2) - b)<=0.0001;
   
    cout << x1 << "is a solution? ";

    if (res1) cout << "true" <<endl;
    else cout << "false" << endl;

    cout << x2 << "is a solution? ";

    if (res2) cout << "true" <<endl;
    else cout << "false" << endl;

}