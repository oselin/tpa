/*
Exercise - deadline 1

You are given a very important deadline in:
int days = 4;
int hours = 13;
int minutes = 52;
Write some code that prints the total minutes. By executing it, it should result:
*/


#include <iostream>

using namespace std;

int main(){

    int days = 4;
    int hours = 13;
    int minutes = 52;

    int totmin = days*24*60 + hours*60 + minutes;

    cout << "In total there are " << totmin << " left.\n";
}