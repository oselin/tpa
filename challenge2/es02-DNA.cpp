/*
Exercise - DNA
Given two DNA strings s1 and s2 of equal length, write some code which PRINTS among the first 
and second string another string made by spaces ` and pipe|` where equal characters are found.

make it also work with strings of different length
Example - given:

char s1[] = "ATACATATAGGGCCAATTATTATAAGTCAC";
char s2[] = "CGCCACTTAAGCGCCCTGTATTAAAGTCGC";
Prints:

ATACATATAGGGCCAATTATTATAAGTCAC
   ||  || |  |  |   |  ||||| |
CGCCACTTAAGCGCCCTGTATTAAAGTCGC
*/

#include <iostream>
using namespace std;

int main(){
    char s1[] = "ATACATATAGGGCCAATTATTATAAGTCAC";
    char s2[] = "CGCCACTTAAGCGCCCTGTATTAAAGTCGC";

    cout << s1 << endl;
    for (int i=0;i<sizeof(s1)-1;i++){
        if (s1[i]==s2[i]) cout << "|";
        else cout << " ";
    }
    cout << "\n" << s2 << endl;
}