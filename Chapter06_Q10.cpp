#include<iostream>
#include<cmath>//allows pow function
#include <iomanip>//allows setprecision
using namespace std;

double futureValue(double present, double interest, double months);//function prototype
//driver program
int main()
{
    double presentVal, monthlyInterest, numberMonths, value;//declaring variables to store user input

    cout << "This program will calculate the future value of your savings account after a period of time.";
    cout << endl << endl;
    cout << "What is the present value of your savings account in dollars? ";
    cin >> presentVal;//user input being stored in presentVal
    cout << "What percentage is your monthly interest rate? ";
    cin >> monthlyInterest;//user input being stored in monthlyInterest
    cout << "How many months will this money be left in your account? ";
    cin >> numberMonths;//user input being stored in numberMonths
    cout << endl;

    value = futureValue (presentVal, monthlyInterest, numberMonths);//calling function futureValue and storing returned value to
//variable "value"
    cout << "The future value of your savings account is $" << fixed << setprecision(2) << value << ".";//print results
    cout << endl << endl;

    return 0;
}

double futureValue(double present, double interest, double months)//futureValue function performing equation to return desired value
{ 
    double future = present * pow((interest + 1), months);
    return future;
}