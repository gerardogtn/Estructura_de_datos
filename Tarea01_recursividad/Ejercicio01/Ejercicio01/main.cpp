//
//  main.cpp
//  Ejercicio01
//
//  Created by Gerardo Teruel on 1/28/15.
//  Copyright (c) 2015 Gerardo Teruel. All rights reserved.
//

#include <iostream>
#include <cmath>

#define N 5

using namespace std;

void printMatrix(int matrix[N][N]);
int powersOfTwo(int rows, int columns, int power);


int main(int argc, const char * argv[]) {
    int matrix[N][N] = {0};
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++) {
            matrix[i][j] = powersOfTwo(i, j, 0);
        }
    }
    
    cout<< pow(2, 0);
    
    std::cout << "Hello, World!\n" /*<<  powersOfTwoMatrix(matrix, 0)*/ << endl;
    printMatrix(matrix);
    return 0;
}

// REQUIRES: A square matrix.
// MODIFIES: None.
// EFFECTS:  Prints to console the matrix.
void printMatrix(int m[N][N])
{
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}


// REQUIRES: rows and columns are natural numbers. power is a positive integer.
// MODIFIES: none.
// EFFECTS:  finds two to the power of the minimum of (rows and columns) recursively.
int powersOfTwo(int rows, int columns, int power){
    int result = 1 ;
    
    if (rows != 0 && columns != 0){
        result = 2 * powersOfTwo(rows - 1, columns -1, power + 1);
    }
  
    return result;
    
}
