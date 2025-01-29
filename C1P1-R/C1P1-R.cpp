// C1P1-R.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double hours;
double rate;
double pay;

int main()
{
    // get the number of hours worked
    cout << "How many hours did you work? ";
    cin >> hours;

    // get the hourly pay rate
    cout << "How much do you get paid per hour? ";
    cin >> rate;

    //calculate the pay
    pay = hours * rate;

    //display the pay
    cout << "you have earned $" << pay << endl;
}
