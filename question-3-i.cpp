#include <iostream>
using namespace std;

void captureArrayValues(double array[], int size){
    /* Function to capture array elements */
    cout << endl << "Enter the array elements. " << endl;
    
    for (int i = 0; i < size; i++){
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }
}

void displayArrayValues(double array[], int size){
    cout << endl;
    cout << "Array has " << size << " elements: " << endl;
    for (int i = 0; i < size; i++){
        cout << array[i];
        
        // comma separated
        if (i == size - 1){
            cout << endl;
        } else {
            cout << ", ";
        }
    }
}

int main() {
    
    const int MAX_NUM_ELEMENTS = 10;
    
    double values[MAX_NUM_ELEMENTS];
    int numberOfElements = 0;
    
    cout << "Enter number of elements: ";
    cin >> numberOfElements;
    
    // validate number of elements is not more than max allowed
    if (numberOfElements > MAX_NUM_ELEMENTS){
        cout << "Number of elements will default to maximum allowed: " << MAX_NUM_ELEMENTS;
        numberOfElements = MAX_NUM_ELEMENTS;
    }
    
    // fill in array elements
    captureArrayValues(values, numberOfElements);
    
    // display array elements
    displayArrayValues(values, numberOfElements);
}