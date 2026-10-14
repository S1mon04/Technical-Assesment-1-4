#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double sideA, sideB, angleC, sideC;
    const double pi = 3.141592653589793;

    cout << "Enter side A: ";
    cin >> sideA;

    cout << "Enter side B: ";
    cin >> sideB;

    cout << "Enter angle C in degrees: ";
    cin >> angleC;

    double angleRadians = angleC * pi / 180;

    sideC = sqrt(
        (sideA * sideA) +
        (sideB * sideB) -
        (2 * sideA * sideB * cos(angleRadians))
    );

    cout << fixed << setprecision(2);
    cout << "Side C is: " << sideC << endl;

    return 0;
}
