#include <iostream>
using namespace std;

int main() {
  int n;
  int i;
  double array[50];
  cout << "How many values do you want to input: ";
  cin >> n;
  //Input the Values
  cout << "Enter the values: ";
  for (i = 0; i < n; i++) {
    cin >> array[i];
  }
  
  //Request for the value to be deleted
  int key;
  cout << "Enter the value you want to delete: ";
  cin >> key;
  
  //Search for the key in the array
  for (i = 0; i < n; i++) {
    if (array[i] == key) {
      n = n - 1;
      for (int j = i; j < n; j++)
        array[j] = array[j + 1];
      break;
    }
  }
  
  for (int i = 0; i < n; i++)
    cout << array[i] << " ";
}