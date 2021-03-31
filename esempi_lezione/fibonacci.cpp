//Write a function named fibonacci that displays all the numbers in the Fibonacci Sequence 
//up to a given max, starting with 0. The Italian mathematician Leonardo Fibonacci devised 
//the Fibonacci sequence as a way to model the growth of a population of rabbits. 
//The first two terms in the sequence are 0 and 1, and every subsequent term is a 
//sum of the previous two terms.

using namespace std;
#include <iostream>

void fibonacci(int n){
    int n0 = 0;
    int n1 = 1;

    for (int i=0; i<n; i++){

        if (i==0){ 
            cout << n0 << endl;
        }
        else if (i==1){
            cout << n1 << endl;
        }
        else{
            int temp = n1;
            n1 += n0;
            n0 = temp;

            cout << n1 << endl;
        }
    }

}


int main(){
    int n;
    cout << "Fibonacci sequence up to: ";
    cin >> n;
    fibonacci(n);
    return 0;
}

