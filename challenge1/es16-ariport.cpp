/*
Exercise - Airport

You finally decide to take a vacation and you go to the airport, but you already know you will 
need to go through various queues. Luckily, you only have carry-on bag, so you directly go to 
security checks, where you can choose among three rows of people sec1, sec2, sec3. Each person 
an average 

takes 4 minutes 

to be examinated, you included, and obviously you choose the shortest 
queue. Afterwards you go to the gate, where you find two queues of ga1 and ga2 people, and you know 
that each person you included an average 

takes 20 seconds 

to pass: again you choose the shortes 
queue. Luckily the aircraft is next to the gate so you can directly choose whether to board at 
the queue at the head of the aircraft with bo1 people or at the queue at the tail of the plane 
with bo2 people. Each passenger you included 

takes an average 30 seconds

, and you choose the 
shortest queue.

Write some code to calculate how much time you take in total to enter the plane, showing 
it in minutes and seconds.

Example - given:

    int sec1=4,sec2=5,sec3=8,ga1=5,ga2=2,bo1=7,bo2=6;
    your code must print:

    24 minutes and 30 seconds
*/


#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int sec1=4,sec2=5,sec3=8,ga1=5,ga2=2,bo1=7,bo2=6;

    int totSec = 4*60*(min({sec1,sec2,sec3})+1) + 20*(min(ga1,ga2)+1) + 30*(min(bo1,bo2)+1);

    int minutes = totSec/60;

    totSec %= 60;

    cout << minutes << " minutes and " << totSec <<" seconds." << endl;
}