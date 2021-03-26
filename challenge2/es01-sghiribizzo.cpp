/*
Exercise - sghiribizzo

Write some code which given the string s PRINTS all the possible combinations of row couples 
such that a row begins with the first characters of s and the successive continues with the 
following characters.

char s[] = "sghiribizzo";
s
 ghiribizzo
sg
  hiribizzo
sgh
   iribizzo
sghi
    ribizzo
sghir
     ibizzo
sghiri
      bizzo
sghirib
       izzo
sghiribi
        zzo
sghiribiz
         zo
sghiribizz
          o
sghiribizzo


*/


#include <iostream>
using namespace std;

int main(){
    char s[] = "sghiribizzo";
    int len = 11;
    char t[len];
    for (int i=0;i<len;i++){
        for (int j=0; j<i;j++) cout << s[j];
        cout << "\n";
        for (int k=0; k<len;k++) {
            if (k<i) {cout << " ";}
            else {cout << s[k];}
        }
        cout << endl;
        
    }
}