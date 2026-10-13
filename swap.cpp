#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0;

    cout << "Enter value a: ";
    cin >> a;

    cout << "Enter value b: ";
    cin >> b;

    a = b;
    b = c;
    c = a;

    cout << "After swapping a: " << a << " b: " << b;

    return 0;
}
