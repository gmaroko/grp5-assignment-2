#include <iostream>

using namespace std;

int main() {
    int n;
    int i;
    double array[50];

    // Input the number of values
    cout << "How many values do you want to input: ";
    cin >> n;

    // Input the values
    cout << "Enter the values:";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Request for the index to be deleted
    int key;
    cout << "Enter the index of the value you want to delete: ";
    cin >> key;

    // Check if the index is valid
    if (key >= 0 && key < n) {

        for (int i = key; i < n - 1; i++) {
            array[i] = array[i + 1];
        }
        n = n - 1;
    } else {
        cout << "Invalid index!!";
    }

    // Output the updated array
    cout << "Updated array:";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

}