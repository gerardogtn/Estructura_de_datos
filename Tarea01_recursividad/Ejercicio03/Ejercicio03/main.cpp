//
//  main.cpp
//  Ejercicio03
//
//  Created by Gerardo Teruel on 1/26/15.
//  Copyright (c) 2015 Gerardo Teruel. All rights reserved.
//

#include <iostream>

using namespace std;

int numPaths(int x, int y);
int makeDivisibleByThree(int x);
int makeDivisibleByTwo(int x);
int verifyN(int n);
int verifyM(int n);

int main(int argc, const char * argv[]) {
    
    int n;
    int m;
    
    cout << "Inserte el valor de n (numero de columnas)" << endl;
    cin >> n;
    verifyN(n);
    
    cout << "Inserte el valor de m (numero de filas)" << endl;
    cin >> m;
    verifyM(m);
    
    cout << "El numero de caminos distintos es: " << numPaths(n, m) << endl;
    return numPaths(n, m);
    
//    
//    cout << (numPaths(0, 0 ) == 0) << endl;
//    cout << (numPaths(3, 0 ) == 1) << endl;
//    cout << (numPaths(0, 2 ) == 1) << endl;
//    cout << (numPaths(3, 2 ) == 2) << endl;
//    cout << (numPaths(6, 2 ) == 3) << endl;
//    cout << (numPaths(3, 4 ) == 3) << endl;
//    cout << (numPaths(6, 4 ) == 6) << endl;
    
    return 0;
}


// Requires: x is a multiple of 3. y is a multiple of 2.
// MODIFIES: None.
// EFFECTS:  Returns the number of possible paths a robot can take.
int numPaths(int x, int y){
    
    int result = 0;
    
    if (x == 0 && y == 0) {
        result+= 0;
    }
    else if (x == 0 || y ==0){
       result+= 1;
    }
    else {
        result+= numPaths(x - 3, y);
        result+= numPaths(x, y - 2);
    }
  
    return result;
}

// Requires: None.
// Modifies: x.
// Effects:  Returns the next integer that is divisible by three.
int makeDivisibleByThree(int x){
    
    if (x % 3 != 0){
        x = x + 1;
    }
    
    return makeDivisibleByThree(x);
}


// Requires: None.
// Modifies: y.
// Effects:  Returns the next integer that is divisible by two.
int makeDivisibleByTwo(int y){

    if (y % 2 != 0){
        y = y + 1;
    }
    
    return makeDivisibleByTwo(y);
}

// Requires: None.
// Modifies: n
// Effects:  Verifies that n is a valid input.
int verifyN(int n){
    if ( n < 0){
        cout << "El valor de n es menor que cero. Inserte un nuevo valor de n." << endl;
        cin >> n;
        return verifyN(n);
    }
    else
        return n;
}

// Requires: None.
// Modifies: m
// Effects:  Verifies that n is a valid input.
int verifyM(int m){
    if ( m < 0){
        cout << "El valor de m es menor que cero. Inserte un nuevo valor de n." << endl;
        cin >> m;
        return verifyN(m);
    }
    else
        return m;
}

