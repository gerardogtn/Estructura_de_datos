

## REQUIRES: The array is sorted. 
## Array<Natural> Natural Natural Natural -> Natural
## Produces the position of the first found instance of the keyToSearch
## in the array. If it is not found, then returns -1. 
function R = binarySearch(array, keyToFind, lowerBound, upperBound)
  R = -1;
  if (lowerBound > upperBound)
    R = -1;
  else
    middle = floor((lowerBound + upperBound) / 2);
    halfValue = array(middle);
    
    if (halfValue == keyToFind)
      R = middle;
    elseif (keyToFind < halfValue)
      R = binarySearch(array, keyToFind, lowerBound, middle);
    else
      R = binarySearch(array, keyToFind, middle + 1, upperBound);
    endif
  endif
end
