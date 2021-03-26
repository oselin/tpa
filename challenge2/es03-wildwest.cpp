/*
Exercise - Wild West

The two outlaws Carson and Butch agreed to bury a treasure in the jolly town of Tombstone, but now 
each of them wants to take back the treasure without sharing anything with the partner.


    -For arriving to the treasure there is a road from Santa Fe until Tombstone which we represent 
    as a list of strings
    -we use two indexes butch and carson to represent where the outlaws are on the road
    -each outlaw starts from a different town 
    -at each turn Carson moves of one city
    -at each turn Butch moves of two cities, because he has a fast Mustang horse

Write some code which prints the run and terminates as soon as one them arrives to the last city, 
telling who got the treasure.

In the case both outlaws arrive to the last city at the same time, prints Final duel in Tombstone!

your code must work for any road and initial position carson and butch

Example - 1 given:

//                  0          1        2             3            4                5
char road[][20] = {"Santa Fe","Denver","Dodge City", "Silverton", "Agua Caliente", "Tombstone"};
int carson = 3, butch = 0;
it must print:

Carson starts from Silverton
Butch starts from Santa Fe
Carson reaches Agua Caliente
Butch reaches Dodge City
Carson reaches Tombstone
Butch reaches Agua Caliente

Carson takes the treasure in  Tombstone !
Example 2 - given:

//                  0          1        2             3            4                5
char road[][20] = {"Santa Fe","Denver","Dodge City", "Silverton", "Agua Caliente", "Tombstone"};
int carson = 3, butch = 2;
it must print:

Carson starts from Silverton
Butch starts from Dodge City
Carson reaches Agua Caliente
Butch reaches Agua Caliente
Carson reaches Tombstone
Butch reaches Tombstone

Final duel in  Tombstone !
*/

#include <iostream>
using namespace std;

int main(){

    char road[][20] = {"Santa Fe","Denver","Dodge City", "Silverton", "Agua Caliente", "Tombstone"};
    int carson = 3, butch = 2;

    cout << "Carson starts from " << road[carson] << endl;
    cout << "Butch starts from " << road[butch] << endl;
    cout << carson << butch << endl;
    while (carson < 5 && butch < 5){
        ++carson; 
        if (butch<4) butch+=2;
        else ++butch;


        cout << "Carson reaches " << road[carson] << endl;
        cout << "Butch reaches " << road[butch] << endl;
    }
    cout << endl;
    if (carson == 5 && butch != 5){
        cout << "Carson takes the treasure in Tombstone !" << endl;
    }
    else if (carson != 5 && butch == 5) {
        cout << "Butch takes the treasure in Tombstone !" << endl;
    }
    else cout << "Final duel!" << endl;
}