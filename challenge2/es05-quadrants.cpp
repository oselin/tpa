/*
Exercise - quadrants

Given a matrix 2n * 2n, divide the matrix in 4 equal square parts (see example) and writes into 
2 * 2 matrix ret the average of each quadrant.

We assume the matrix is always of even dimensions

Example:

 1, 2 , 5 , 7
 4, 1 , 8 , 0
 2, 0 , 5 , 1 
 0, 2 , 1 , 1
can be divided in

  1, 2 | 5 , 7
  4, 1 | 8 , 0
----------------- 
  2, 0 | 5 , 1 
  0, 2 | 1 , 1
and puts into ret

  (1+2+4+1)/ 4  | (5+7+8+0)/4                        2.0 , 5.0 
  -----------------------------            =>        1.0 , 2.0 
  (2+0+0+2)/4   | (5+1+1+1)/4
Write code to invoke the function and prints the result.
*/


#include <iostream>
using namespace std;

void quadrants(int n, double mat[20][20], double ret[20][20]){

    int xindex=0, jindex=0;

    for (int i=0; i<=2*n; i++){
        for (int j = 0; j<2*n; j++){

            if (i<n) xindex = 0;
            else xindex = 1;

            if (j<n) jindex = 0;
            else jindex = 1;

            ret[xindex][jindex] += mat[i][j];
        }        
    }

    for (int k=0;k<n; k++){
        for (int q=0;q<n; q++){
            ret[k][q] = ret[k][q]/(2*n);
        }
    }
    
    // write here
                        
}

int main(){
    
    int dim = 0;
    do{
        cout << "Inserire N tale che venga creata una matrice 2n X 2n (minore di 10): ";
        cin >> dim;

    }while ((dim<=0) && (dim > 20));
    
    
    dim *=2;
    double ret[20][20];
    double mat[20][20];
    
    cout << "La matrice sarà di " << dim << " X " << dim << endl;

    for (int i=0; i<dim; i++){
        double row[dim];
        for (int j=0; j<dim; j++){
            cout << "Inserisci l'elemento [" << i <<"][" << j << "]: ";
            cin >> row[j];
        }
        for (int k=0; k<dim; k++) mat[i][k] = row[k];
    }

    for (int i=0; i<dim; i++){
        for (int k=0; k<dim; k++){
            cout << mat[i][k] << " ";
        }
        cout << endl;
    }
    
    cout << "\n\n";
    quadrants(dim/2, mat, ret);

    for (int i=0; i<dim/2; i++){
        for (int k=0; k<dim/2; k++){
            cout << ret[i][k] << " ";
        }
        cout << endl;
    }
}
