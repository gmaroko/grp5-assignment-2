#include <iostream>
using namespace std;

void captureValues(int array[], int numberOfItems){
    /*
     Function that prompts the user for values, 
     and populates a given array
     and the number of items expected
    */

    // loop for user input
    for(int i = 0; i < numberOfItems; i++){
        cout << "Enter the number at index " << i << ": ";
        cin >> array[i];
    }
}

int linearSearch(int arrayOfNumbers[], int value, int sizeOfArray){
    /*
    function to perform a linear search
    return the index of the value if found,
    otherwise return -1
    */
    
    for(int index = 0; index < sizeOfArray; index++){
        if(arrayOfNumbers[index] == value){
            // item is found, return index
            return index;
        }
        continue;
    }
    // if we get to this point, the value wasn't found, so return -1
    return -1;
}



int main() {
    int numberOfItemsInArray = 0;
    cout << "How many items are in your array? :";
    cin >> numberOfItemsInArray;
    
    int numbers[numberOfItemsInArray];
    
    // capture values and create the array
    captureValues(numbers, numberOfItemsInArray);
    
    // linear search
    
    int valueToSearchFor;
    cout << "Enter a number to search for in the array: ";
    cin >> valueToSearchFor;
    
    // default -1 meaning value was not found
    int foundIndex = -1;
    
    foundIndex = linearSearch(numbers, valueToSearchFor, numberOfItemsInArray);
    
    if (foundIndex == -1){
        cout << "The number " << valueToSearchFor << " is not in the array." << endl;
    } else {
        cout << "The number " << valueToSearchFor << " was found in the index " << foundIndex << endl;
    }
}