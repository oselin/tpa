/*
Exercise - deadline 2

For another super important deadline there are left:

int totMinutes = 5000;
Write some code that prints:

There are left:
   3 days
   11 hours
   20 minutes
*/
#include <iostream>

using namespace std;

int main(){

    int totMinutes = 5000;

    int days = totMinutes/(24*60);
    totMinutes %= (24*60);
    int hours = totMinutes/(60);
    totMinutes %= (60);
    int minutes = totMinutes;

    cout << "There are left: \n"; 
    cout << "\t" << days << " days\n";
    cout << "\t" << hours << " hours\n";
    cout << "\t" << minutes << " minutes\n";


}
