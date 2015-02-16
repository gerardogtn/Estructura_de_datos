//
//  main.cpp
//  GenericSearch
//
//  Created by Gerardo Teruel on 2/15/15.
//  Copyright (c) 2015 Gerardo Teruel. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "GenericSearch.h"

using namespace std;

// FUNCTION PROTOTYPES
template <typename T>
void printArray(const T array[], int arraySize);

void generateRandomIntArray(int arrayInt[], int arraySize);
void generateSequentialArray(int arrayInt[], int arraySize);

// MAIN FUNCTION
int main(int argc, const char * argv[]) {
    const int arraySize = 6;
    int arrayRandomInt[arraySize] = {};
    int arraySequentialInt[arraySize] = {};
    
    generateSequentialArray(arraySequentialInt, arraySize);
    cout << "Un arreglo de numeros secuenciales es el siguiente:" << endl;
    printArray(arraySequentialInt, arraySize);
    cout << endl;
    
    int keyToSearch;
    cout << "Entre el elemento a buscar: ";
    cin >> keyToSearch;
    
    /*
    if (GenericSearch<int>::linearSearch(arraySequentialInt, keyToSearch, arraySize)){
        cout << "El elemento existe en el arreglo, con posicion: ";
        cout << GenericSearch<int>::linearSearchPosition(arraySequentialInt, keyToSearch, arraySize);
        cout << endl;
    }
    else {
        cout << "El elemento NO existe en el arreglo" << endl;
    }
    */
    
    if (GenericSearch<int>::binarySearch(arraySequentialInt, keyToSearch, 0, arraySize)){
        cout << "El elemento existe en el arreglo, con posicion: ";
        cout << GenericSearch<int>::binarySearchPosition(arraySequentialInt, keyToSearch, 0, arraySize);
        cout << endl;
    }
    else {
        cout << "El elemento NO existe en el arreglo" << endl;
    }
    
    /*
    generateRandomIntArray(arrayRandomInt, arraySize);
    cout << endl << "Un arreglo de numeros aleatorios es el siguiente:" << endl;
    printArray(arrayRandomInt, arraySize);
    cout << endl;
    
    cout << "Entre el elemento a buscar: ";
    cin >> keyToSearch;
    
    if (GenericSearch<int>::linearSearch(arrayRandomInt, keyToSearch, arraySize)){
        cout << "El elemento existe en el arreglo, con posicion: ";
        cout << GenericSearch<int>::linearSearchPosition(arrayRandomInt, keyToSearch, arraySize);
        cout << endl;
    }
    else {
        cout << "El elemento NO existe en el arreglo" << endl;
    }
    
    */
    return 0;
}

template <typename T>
void printArray(const T array[], int arraySize){
    
    for (int i = 0; i < arraySize; i++){
        cout << setw(3) << array[i] << " ";
    }
    
    cout << endl;
}

void generateRandomIntArray(int arrayInt[], int arraySize){
    srand((unsigned int) time(nullptr));

    for (int i = 0; i < arraySize; i ++){
        arrayInt[i] = rand() % 100;
    }
}

void generateSequentialArray(int arrayInt[], int arraySize){
    for (int i = 0; i < arraySize; i ++){
        arrayInt[i] = i;
    }
}

