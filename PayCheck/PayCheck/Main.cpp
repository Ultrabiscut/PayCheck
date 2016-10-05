#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Program: 
//Author:
//Course:
//Description:

int main()
{
	//declare variables
	double dGrossAmount, dNetPay, dFedTax, dStateTax, dSocialTax, dMedTax, dPensionTax;
	double dInsurance = 75.00;
	string sName;
	
	//Get Input
	cout << "Enter Full Name: ";
	getline(cin, sName);
	cout << "Enter Gross Amount: ";
	cin >> dGrossAmount;

	//skip line
	cout << endl;

	//Calculate
	dFedTax = dGrossAmount * 0.15;
	dStateTax = dGrossAmount * 0.035;
	dSocialTax = dGrossAmount * 0.0575;
	dMedTax = dGrossAmount * 0.0275;
	dPensionTax = dGrossAmount * 0.05;
	dInsurance = 75.00;
	dNetPay = dGrossAmount - dFedTax - dStateTax - dSocialTax - dMedTax - dPensionTax - dInsurance;

	//set precision to a fixed point
	cout << fixed << setprecision(2);

	//display output
	cout << sName << endl;
	
	cout << left;
	cout << setw(26) << setfill('.') << "Gross Amount: ";
	cout << right;
	cout << " $" << setw(7) << dGrossAmount  << endl;

	cout << left;
	cout << setw(26) << setfill('.') << "Federal Tax: ";
	cout << right;
	cout << " $" << setw(7) << setfill (' ') << dFedTax << endl;
	
	cout << left;
	cout << setw(26) << setfill('.') << "State Tax: ";
	cout << right;
	cout << " $" << setw(7) << setfill (' ') << dStateTax << endl;

	cout << left;
	cout << setw(26) << setfill('.') << "Social Security Tax: ";
	cout << right;
	cout << " $" << setw(7) << setfill(' ') << dSocialTax << endl;

	cout << left;
	cout << setw(26) << setfill('.') << "Medicare/Medicaid Tax: ";
	cout << right;
	cout << " $" << setw(7) << setfill(' ') << dMedTax << endl;

	cout << left;
	cout << setw(26) << setfill('.') << "Pension Plan: ";
	cout << right;
	cout << " $" << setw(7) << setfill(' ') << dPensionTax << endl;

	cout << left;
	cout << setw(26) << setfill('.') << "Health Insurance: ";
	cout << right;
	cout << " $" << setw(7) << setfill(' ') << dInsurance << endl;

	cout << left;
	cout << setw(26) << setfill('.') << "Net Pay: ";
	cout << right;
	cout << " $" << setw(7) << setfill(' ') << dNetPay << endl;

	return 0;
}