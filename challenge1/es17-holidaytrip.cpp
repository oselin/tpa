/*
Exercise - Holiday trip
While an holiday you are traveling by car, and in a particular day you want to visit one among 4 
destinations. Each location requires to go through two roads r1 and r2. Roads are numbered with 
two digits numbers, for example to reach destination 1 you need to go to road 58 and road 17.

Write some code that given r1 and r2 roads shows the number of the destination.

    -If the car goes to a road it shouldn't (i.e. road 666), put 0 in destination
    -DO NOT use summations
    -IMPORTANT: DO NOT use if commands (it's possible, think about it ;-)


Example 1 - given:

    int r1=58,r2=31;
    After your code it must print:

    The destination is 2
    Example 2 - given:

    int r1=666,r2=31;
    After your code it must print:

    The destination is 0
*/

#include <cmath>
#include <iostream>
using namespace std;

int main(){

    int r1, r2, out;

    cout << "Inserisci la prima strada: ";
    cin >> r1;

    cout << "Inserisci la seconda strada: ";
    cin >> r2;

    switch (r1)
    {
    case 58:
        switch (r2)
        {
        case 17:
            out = 1;
            break;
        case 31:
            out = 2;
            break;
        default:
            out = 0;
            break;
        }
        break;
    case 32:
        switch (r2)
        {
        case 29:
            out = 3;
            break;
        default:
            out = 0;
        }        
        break;
    case 42:
        switch (r2)
        {
        case 75:
            out = 4;
            break;
        default:
            out = 0;
        }        
        break;
    default:
        out = 0;
        break;
    }

    cout << "The destination is " << out << endl;
}
