/*
Exercise - cycling

 Write a program that given three variables with numebers a,b,c, cycles the values, 
 that is, puts the value of a in b, the value of b in c, and the value of c in a .
*/
#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 7;
    int c = 9;

    
    int temp = a;
    
    a = c;
    c = b;
    b = temp;


    cout << a << endl;
    cout << b << endl;
cout << c << endl;

}