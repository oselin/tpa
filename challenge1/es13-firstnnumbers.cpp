/*
Exercise - first n numbers
Rewrite the example of the sum of the first 1200 integers by using the following equation:

Then modify the program to make it acquire the number of integers to sum n from the user at 
runtime

It should show Sum of first 1200 integers:  720600
*/

#include <math.h>
#include <iostream>
using namespace std;

int main(){

    int n = 1200;
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }

    cout << "Sum of first " << n << " integers: " << sum << endl;

    cout << "inserire numero di interi da sommare: ";
    
    cin >> n;
    sum=0;
    for(int i=1; i<=n; i++){
        sum += i;
    }

    cout << "Sum of first " << n << "integers: " << sum << endl;

}