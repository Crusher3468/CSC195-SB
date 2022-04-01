// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

int main()
{
    string name;
    char initial;
    short age;
    bool isAdult;
    int zipcode;
    float wage;
    int daysWorked;
    int hoursWorkedPerDay[7];
    int totalHoursWorked = 0;
    const float TAX = 0.1f;

    cout  <<  "Enter Your First Name\n";
    cin  >>  name;
    cout << "Enter Your Last Name Initial\n";
    cin >> initial;
    cout << "Enter Your Age\n";
    cin >> age;

    if (age <= 18) isAdult = true; else isAdult = false;

    cout << "Enter Your Zipcode:\n";
    cin >> zipcode;
    cout << "Enter Your Hourly Wage:\n";
    cin >> wage;
    cout << "Enter the number of days you work each week\n";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++)
    {
        cout << "Enter hours worked for day " <<  i + 1 << ":\n";
        cin >> hoursWorkedPerDay[i];
        totalHoursWorked = totalHoursWorked + hoursWorkedPerDay[i];
    }

    double grossIncome = totalHoursWorked * wage;
    double netIncome = grossIncome - (grossIncome * TAX);
    cout << name << " " << initial << " worked " << "at $" << wage << "an hour.";
    cout << "\nGross Income: " << "$" << grossIncome;
    cout << "\nNet Income: " << "$" << netIncome;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
