
#include <iostream>
using namespace std;

void captureValues(double salaries[], int numberOfEmployees){
    /*
     Function that prompts the user for salaries 
     and populates a given array
     and the number of items expected
    */
    for(int i = 0; i < numberOfEmployees; i++){
        cout << "Enter employee " << i+1 << "'s salary ";
        cin >> salaries[i];
    }
}

double computeAverageSalary(double salaries[], int numberOfEmployees){
    
    double sum = 0.0;
    double average = 0.0;
    
    // compute total salaries
    for(int index=0; index<numberOfEmployees; index++){
        sum += salaries[index];
    }
    
    // compute and return average salary
    average = sum / numberOfEmployees;
    
    return average;
}


void displaySalaries(double salaries[], double averageSalary, int numberOfEmployees){
    cout << "Value \t\t\t Deviation" << endl;
    for(int index=0; index<numberOfEmployees; index++){
        double salary = salaries[index];
        double deviation = salary - averageSalary;
        cout << salary << " \t\t\t\t " << deviation  << endl;
    }
}

int main() {
    int numberOfEmployees = 0;
    cout << "How many employees are there? :";
    cin >> numberOfEmployees;
    
    double salaries[numberOfEmployees];
    
    // capture values and create the array
    captureValues(salaries, numberOfEmployees);
    
    double averageSalary = computeAverageSalary(salaries, numberOfEmployees);
    
    displaySalaries(salaries, averageSalary, numberOfEmployees);
}