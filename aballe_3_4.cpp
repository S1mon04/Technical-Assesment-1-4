#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double peso;

    cout << "Enter Philippine peso: ";
    cin >> peso;

    double dollar = peso / 43.33089;
    double euro = dollar * 0.734719;
    double yuan = dollar * 6.346934;
    double koruna = dollar * 18.77263;
    double krone = dollar * 5.449007;
    double sheqel = dollar * 3.726334;
    double dinar = dollar * 0.274588;

    cout << fixed << setprecision(6);

    cout << "\nThe amount's equivalent to:" << endl;
    cout << "US Dollar: " << dollar << endl;
    cout << "Euro: " << euro << endl;
    cout << "Yuan: " << yuan << endl;
    cout << "Koruna: " << koruna << endl;
    cout << "Krone: " << krone << endl;
    cout << "Sheqel: " << sheqel << endl;
    cout << "Dinar: " << dinar << endl;

    return 0;
}
