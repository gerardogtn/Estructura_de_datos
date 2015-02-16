//
//  GenericSearch.h
//  GenericSearch
//
//  Created by Gerardo Teruel on 2/15/15.
//  Copyright (c) 2015 Gerardo Teruel. All rights reserved.
//

#ifndef GenericSearch_GenericSearch_h
#define GenericSearch_GenericSearch_h

template <typename T>
class GenericSearch{
    
public:
    // Boolean search functions
    static bool linearSearch(const T array[], T keyToSearch, int arraySize);
    static bool binarySearch(const T array[], T keyToSearch, int lowerBoundary, int upperBoundary);
    
    // Position search functions
    static int linearSearchPosition(const T array[], T keyToSearch, int arraySize);
    static int binarySearchPosition(const T array[], T keyToSearch, int lowerBoundary, int upperBoundary);
};


// Sequentially looks for an element in an array.
// Requires: None.
// Modifies: None.
// Effects: Returns true if keyToSearch is an element of array. False otherwise.
template <typename T>
bool GenericSearch<T>::linearSearch(const T array[], T keyToSearch, int arraySize){
    int  position = 0;
    bool found    = false;
    
    if (arraySize <= 0) return found;
    
    while (position < arraySize && !found){
        if (array[position] == keyToSearch){
            found = true;
        }
        position++;
    }
    
    return found;
}

// Through a binary search looks for an element in an array.
// Requires: Array is sorted
// Modifies: None
// Effects:  Returns true if keyToSearch is an element of array. False otherwise.
template <typename T>
bool GenericSearch<T>::binarySearch(const T array[], T keyToSearch, int lowerBoundary, int upperBoundary){
    if (lowerBoundary >= upperBoundary || lowerBoundary < 0) return false;
    
    int middle =  (lowerBoundary + upperBoundary) / 2;
    int halfValue = array[middle];
    
    if (halfValue == keyToSearch){
        return true;
    }
    else if (keyToSearch < halfValue){
        return binarySearch(array, keyToSearch, lowerBoundary, middle);
    }
    else{
        return binarySearch(array, keyToSearch, middle + 1, upperBoundary);
    }
    
}


// Sequentially looks for an element in an array.
// Requires: None.
// Modifies: None.
// Effects: If keyToSearch exists, returns the position of the first occurrence of keyToSearch in
// the array. Otherwise returns -1.
template <typename T>
int GenericSearch<T>::linearSearchPosition(const T array[], T keyToSearch, int arraySize){
    if (arraySize <= 0) return -1;
    
    for (int i = 0; i < arraySize; i++){
        if (array[i] == keyToSearch) return i;
    }
    
    return -1;
}

// Through a binary search looks for an element in an array.
// Requires: Array is sorted.
// Modifies: None
// Effects: If keyToSearch is present at least once in array, returns the position of the first found
// occurrence. Otherwise returns -1.
template <typename T>
int GenericSearch<T>::binarySearchPosition(const T array[], T keyToSearch, int lowerBoundary, int upperBoundary){
    //if (lowerBoundary < 0||
    if (lowerBoundary >= upperBoundary){
        return -1;
    }else{
        int middle =  (lowerBoundary + upperBoundary) / 2;
        int halfValue = array[middle];
        
        if (halfValue == keyToSearch){
            return middle;
        }
        else if (keyToSearch < halfValue){
            return binarySearch(array, keyToSearch, lowerBoundary, middle);
        }
        else{
            return binarySearch(array, keyToSearch, middle + 1, upperBoundary);
        }
    }
}


#endif
