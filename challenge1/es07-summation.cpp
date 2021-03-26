/*
Exercise - summation
Write some code to calculate the value of the following expression (don't use cycles, 
write down all calculations), you should obtain 20.533333

use setprecision to change displayed digits by cout
*/

#include <math.h>
#include <iomanip> //per poter usare setprecision
#include <iostream>
using namespace std;

long double equation(int j){

    return pow(j,4)/(j+2);
}

int main(){

    long double value = equation(1) + equation(2) + equation(3);

    cout << setprecision(8) << value << endl;

}