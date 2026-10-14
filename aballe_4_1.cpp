#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sideA, sideB, hypotenuse;

    cout << "Enter the first side: ";
    cin >> sideA;

    cout << "Enter the second side: ";
    cin >> sideB;

    hypotenuse = sqrt((sideA * sideA) + (sideB * sideB));

    cout << "The hypotenuse is: " << hypotenuse << endl;

    return 0;
}
