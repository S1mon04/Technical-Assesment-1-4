#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day, time, courseCode, section, room;

    cout << "Enter Day: ";
    getline(cin, day);

    cout << "Enter Time: ";
    getline(cin, time);

    cout << "Enter Course Code: ";
    getline(cin, courseCode);

    cout << "Enter Section: ";
    getline(cin, section);

    cout << "Enter Room: ";
    getline(cin, room);

    cout << "\nDay     Time       Course Code   Section  Room" << endl;
    cout << day << "  " << time << "  " << courseCode << "       " << section << "      " << room << endl;
	return 0;
}
