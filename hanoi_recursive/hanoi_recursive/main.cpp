//
//  main.cpp
//  hanoi_recursive
//
//  Created by Gerardo Teruel on 1/15/15.
//  Copyright (c) 2015 Gerardo Teruel. All rights reserved.
//

#include <iostream>
using namespace std;

void hanoi(int, int, int, int);

int main(int argc, const char * argv[]) {
    
    int numDisks;
    
    cout << "Input the number of disks: ";
    cin >> numDisks;
    
    if (numDisks < 1){
        cout << "The number of disks must be greater than zero. ";
        cin >> numDisks;
    }
    
    hanoi(numDisks, 1, 3, 2);
    
    return 0;
}

void hanoi(int numDisks, int origin, int destination, int aux){
    
    if (numDisks == 1){
        cout << " Move the disk " << numDisks << " from " << origin << " to " << destination << endl;
    }
    else{
        hanoi(numDisks - 1, origin, aux, destination);
        cout << " Move the disk " << numDisks << " from " << origin << " to " << destination << endl;
        hanoi(numDisks -1, aux, destination, origin);
    }
}
