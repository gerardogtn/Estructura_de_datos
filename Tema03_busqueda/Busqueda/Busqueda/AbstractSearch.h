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
    
    static bool sequentialSearch(T searchingArray[], T valueToSearch, int lengthOfArray);
    static bool binarySearch(T searchingArray[], T valueToSearch, int lowerBound, int upperBound);
};


template <typename T>
bool AbstractSearch<T>::sequentialSearch(T searchingArray[], T valueToSearch, int lengthOfArray){
    bool exists = false;
    int index = 0;
    
    if(lengthOfArray <= 0){
        return false;
    }
    
    while (!exists && index < lengthOfArray) {
        if (searchingArray[index] == valueToSearch) {
            return true;
        }
        index++;
    }
    
    return exists;
}

template <typename T>
bool AbstractSearch<T>::binarySearch(T searchingArray[], T valueToSearch, int lowerBound, int upperBound){
    
    
    return false; //STUB
}