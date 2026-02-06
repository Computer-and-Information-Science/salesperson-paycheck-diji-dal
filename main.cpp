//Name: Samuel Kroll
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() {
  //file variables
  ifstream readData;
  ofstream writeData;
  
  //employ information and other variables
  string firstName, lastName;
  string fileName;
  double baseSalary, commission, totalSales, expenses, total;
  
  //prompt user for file name
  cout << "Enter the name of the employee's file: " << endl;
  cin >> fileName;

  readData.open(fileName);

  //assigning values from files to variables
  readData >> firstName >> lastName >> baseSalary >> commission >> totalSales >> expenses;
  total = baseSalary + commission * totalSales / 100 + expenses;

  //output to terminal with formatting
  cout << fixed << setprecision(2);
  cout << "Payroll data for " << firstName << " " << lastName << endl << endl;
  cout << "Base Salary: " << setw(8) << "$" << setw(8) << baseSalary << endl;
  cout << "Commission: " << setw(9) << "$" << setw(8) << commission * totalSales / 100 << " (" << commission << "% of " << totalSales << ")" << endl;
  cout << "Expenses: " << setw(11) << "$" << setw(8) << expenses << endl;
  cout << setw(30) << "----------" << endl;
  cout << "Total: " << setw(14) << "$" << setw(8) << total << endl;

  readData.close();

  return 0;
}
