//
//  AbstractSearch.h
//  Busqueda
//
//  Created by Gerardo Teruel on 1/26/15.
//  Copyright (c) 2015 Gerardo Teruel. All rights reserved.
//

#ifndef __Busqueda__AbstractSearch__
#define __Busqueda__AbstractSearch__

#include <stdio.h>

#endif /* defined(__Busqueda__AbstractSearch__) */

template <typename T>
class AbstractSearch{
public:
    
    // Returns whether the value exists or not.
    static bool sequentialSearch(T searchingArray[], T valueToSearch, int lengthOfArray);
    static bool binarySearch(T searchingArray[], T valueToSearch, int lowerBound, int upperBound);
    
    // Returns the position in the array of the value that is being searched.
    static int sequentialSearchIndex(T searchingArray[], T valueToSearch, int lengthOfArray);
    static int binarySearchIndex(T searchingArray[], T valueToSearch, int lowerBound, int upperBound);
};


template <typename T>
bool AbstractSearch<T>::sequentialSearch(T searchingArray[], T valueToSearch, int lengthOfArray){
    bool exists = false;
    int index = 0;
    
    if(lengthOfArray <= 0){
        return exists;
    }
    
    while (!exists && index < lengthOfArray) {
        if (searchingArray[index] == valueToSearch) {
            exists = true;
        }
        index++;
    }
    
    return exists;
}

template <typename T>
bool AbstractSearch<T>::binarySearch(T searchingArray[], T valueToSearch, int lowerBound, int upperBound){
    
    if (lowerBound >= upperBound){
        return false;
    }
    else{
        
        int half = (lowerBound + upperBound) / 2;
        
        if ( searchingArray[half] == valueToSearch){
            return true;
        }
        else if ( valueToSearch < searchingArray[half]){
            binarySearch(searchingArray, valueToSearch, 0, half);
        }
        else{
            binarySearch(searchingArray, valueToSearch, half + 1, upperBound);
        }
    }
}

template <typename T>
int AbstractSearch<T>::sequentialSearchIndex(T searchingArray[], T valueToSearch, int lengthOfArray){
    int exists = -1;
    int index = 0;
    
    if(lengthOfArray <= 0){
        return -1;
    }
    
    while (!exists && index < lengthOfArray) {
        if (searchingArray[index] == valueToSearch) {
            exists = index;
        }
        index++;
    }
    
   return exists;
}

template <typename T>
int AbstractSearch<T>::binarySearchIndex(T searchingArray[], T valueToSearch, int lowerBound, int upperBound){
    
    if (lowerBound >= upperBound){
        return -1;
    }
    else{
        
        int half = (lowerBound + upperBound) / 2;
        
        if ( searchingArray[half] == valueToSearch){
            return half;
        }
        else if ( valueToSearch < searchingArray[half]){
            binarySearch(searchingArray, valueToSearch, 0, half);
        }
        else{
            binarySearch(searchingArray, valueToSearch, half + 1, upperBound);
        }
    }
}

