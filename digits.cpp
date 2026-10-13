#include <iostream>
using namespace std;

int main()
{
    int number, hundreds, tens, ones;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    hundreds = number / 100;
    number = number % 100;

    tens = number / 10;
    ones = number % 10;

    cout << "Hundreds digits: " << hundreds << endl;
    cout << "Tens digits: " << tens << endl;
    cout << "Ones digits: " << ones << endl;

    return 0;
}
