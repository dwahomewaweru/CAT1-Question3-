// CAT1(Question3)
// C++ Program that calculates the tax payable to the government and net salary of an employee based on the new tax rate at PowerPro Company

#include <iostream>
using namespace std;

int main()
{
	float sal, tax, netsal;
	cout << " Tax payable to the Government and Net salary of every employee at PowerPro Company \n";
	sal = 10000;
	tax = 0.25 * sal ;
	netsal = sal - tax ;
	cout << " \n The Tax Payable   : " << tax << endl;
	cout << "\n The Net Salary : " << netsal << endl;

	return 0;
}
