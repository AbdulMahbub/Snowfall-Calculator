//==========================================================
//
// Title:      Lab02-03
// Course:     CSC 1101
// Lab Number: Lab02-03
// Author:     Abdul Mahbub
// Date:       January 17, 2019
// Description:
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Declare variables
	int month1 = 2;
	int month2 = 6;
	int month3 = 5; 
	double total;
	double average;

  // Show application header
	cout << "Welcome to Average Snowfall Calculator" << endl;
	cout << "======================================" << endl;
	cout << endl;

  // Calculate total and average
  total = month1 + month2 + month3;
  average = total / 3;

  // Calculate and show inputs and outputs
  cout << "Snowfall amounts" << endl;
  cout << "Month 1 (inches):       " << month1 << endl;
  cout << "Month 2 (inches):       " << month2 << endl;
  cout << "Month 3 (inches):       " << month3 << endl;
  cout << "Total (inches):         " << total << endl;
  cout << "Average (inches/month): " << average << endl;
  cout << endl;

  // Show application close
  cout << "Thanks for using Average Snowfall Calculator!" << endl;
  cout << "=============================================" << endl;
  cout << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
