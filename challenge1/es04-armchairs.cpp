/*
Exercise - armchairs

The tycoon De Industrionis owns two factories of armchairs, one in Belluno city and one in Rovigo. 
To make an armchair three main components are needed: a mattress, a seatback and a cover. 
Each factory produces all required components, taking a certain time to produce each component:

int b_mat=23, b_bac=54, b_cov=12, r_mat=13, r_bac=37, r_cov=24;

Belluno takes 23h to produce a mattress, 54h the seatcback and 12h the cover. Rovigo, respectively, 
takes 13, 37 and 24 hours. When the 3 components are ready, assembling them in the finished 
armchair requires one hour.

Sometimes peculiar requests are made by filthy rich nobles, that pretends to be shipped in a few 
hours armchairs with extravagant like seatback in solid platinum and other nonsense.

If the two factories start producting the components at the same time, De Industrionis wants to 
know in how much time the first armchair will be produced. Write some code to calculate that number.

NOTE 1: we are not interested in which factory will produce the armchair, we just want to know the 
shortest time in which we will get an armchair

NOTE 2: suppose both factories don't have components in store
NOTE 3: the two factories do not exchange components
NOTE 4: std::min and max only take 2 parameters, to pass more use curly brackets like std::min({1,2,3})
Example 1 - given:

int b_mat=23, b_bac=54, b_cov=12, r_mat=13, r_bac=37, r_cov=24;
your code must print:

The first armchair will be produced in 38 hours.
*/

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int productionTime(int b_mat, int b_bac, int b_cov, int r_mat, int r_bac, int r_cov){

    int bellunoTime = max({b_mat, b_bac, b_cov});
    int rovigoTime = max({r_mat, r_bac, r_cov});

    return min(bellunoTime, rovigoTime);

}

int main(){

    int b_mat=23, b_bac=54, b_cov=12, r_mat=13, r_bac=37, r_cov=24;
    int hours = productionTime(b_mat, b_bac, b_cov, r_mat, r_bac, r_cov) + 1;
    cout << "The first armchair will be produced in " << hours << " hours.\n";

    b_mat=81, b_bac=37, b_cov=32, r_mat=54, r_bac=36, r_cov=91;
    hours = productionTime(b_mat, b_bac, b_cov, r_mat, r_bac, r_cov) + 1;
    cout << "The first armchair will be produced in " << hours << " hours.\n";
}
