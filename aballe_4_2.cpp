#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string payrollPeriod, employeeID, employeeName;
    double monthlySalary, lateMinutes;

    const double philhealth = 1000.00;
    const double pagibig = 800.00;
    const double sss = 1200.00;

    cout << "Enter payroll period: ";
    getline(cin, payrollPeriod);

    cout << "Enter employee ID: ";
    getline(cin, employeeID);

    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter monthly salary: ";
    cin >> monthlySalary;

    cout << "Enter lates and absences in minutes: ";
    cin >> lateMinutes;

    double lateHours = lateMinutes / 60;
    double hourlyRate = (monthlySalary / 30) / 8;
    double lateDeduction = hourlyRate * lateHours;
    double tax = monthlySalary * 0.12;

    double totalDeductions =
        lateDeduction + philhealth + pagibig + sss + tax;

    double netPay = monthlySalary - totalDeductions;

    cout << fixed << setprecision(2);

    cout << "\nFEU - Institute of Technology\n\n";
    cout << "Employee ID: " << employeeID << endl;
    cout << "Payroll Period: " << payrollPeriod << endl;
    cout << "Employee Name: " << employeeName << endl;

    cout << "\nINCOME\n";
    cout << "Monthly Salary: Php " << monthlySalary << endl;
    cout << "Total Earnings: Php " << monthlySalary << endl;

    cout << "\nDEDUCTIONS\n";
    cout << "Lates and absences: Php " << lateDeduction << endl;
    cout << "Philhealth: Php " << philhealth << endl;
    cout << "Pag-ibig: Php " << pagibig << endl;
    cout << "SSS: Php " << sss << endl;
    cout << "Withholding tax: Php " << tax << endl;

    cout << "Total Deductions: Php " << totalDeductions << endl;
    cout << "Net Pay: Php " << netPay << endl;

    return 0;
