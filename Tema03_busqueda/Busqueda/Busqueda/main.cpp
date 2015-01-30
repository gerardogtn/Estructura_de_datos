//
//  main.cpp
//  Busqueda
//
//  Created by Gerardo Teruel on 1/26/15.
//  Copyright (c) 2015 Gerardo Teruel. All rights reserved.
//

#include <iostream>
#define N 5

using namespace std;

void printMatrix(int m[N][N]);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int randomMatrix[N][N];
    
    srand((unsigned) time(NULL));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            randomMatrix[i][j] = rand() % 100;
        }

    }
    
    std::cout << "The random matrix is:  \n" << endl;
    
    printMatrix(randomMatrix);
    
    return 0;
}

// REQUIRES: A square matrix of N by N.
// MODIFIES: None.
// EFFECTS:  Prints to console the matrix.
void printMatrix(int m[N][N]){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

// REQUIRES: A square matrix of N by N.
// MODIFIES: None.