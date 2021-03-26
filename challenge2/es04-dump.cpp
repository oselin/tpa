/*
Exercise - dump

The multinational ToxiCorp wants to hire you for devising an automated truck driver which will 
deposit highly contaminated waste in the illegal dumps they own worldwide. You find it ethically 
questionable, but they pay well, so you accept.

A dump is modelled as a rectangular region of dimensions nrow and ncol, implemented as a list of 
lists matrix. Every cell i, j contains the tons of waste present, and can contain at most 7 tons 
of waste.

The dumpster truck will transport q tons of waste, and try to fill the dump by depositing waste 
in the first row, filling each cell up to 7 tons. When the first row is filled, it will proceed 
to the second one from the left , then to the third one again from the left until there is no 
waste to dispose of.

Function dump(int mat[][30], int nrow, int ncol, int q, int ret[]) takes as input the dump mat 
and the number of tons q to dispose of, and writes into ret a plan with the sequence of tons to 
dispose. Plan is terminated by a -1.

NOTE: the function does not modify the matrix

Example:

int ret[120] = {-1};
                            // tons to dump in each cell
int m[][30] = { {5,4,6},    // 2 3 1     
                {4,7,1},    // 3 0 6     
                {3,2,6},    // 4 3 0     
                {3,6,2} };  // 0 0 0

dump(m, 4, 3, 22, ret );

for (int i=0; ret[i] != -1; i++){
    cout << ret[i] << " ";
}
cout << endl;

2 3 1 3 0 6 4 3
For first row we dispose of 2,3,1 tons in three cells, for second row we dispose of 3,0,6 tons 
in three cells, for third row we only dispose 4, 3 tons in two cells as limit q=22 is reached.
*/


#include <iostream>
using namespace std;


void dump(int mat[][30], int nrow, int ncol, int q, int ret[]){}


int main(){


}