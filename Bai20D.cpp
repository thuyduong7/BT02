#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double incomeIncludeTax (double income, double tax){
    income *= 0.91;
    if (income > 2000000) tax = 500000 * 0.25 + (income - 2000000) * 0.20;
    else if (income > 1500000) tax = 500000 * 0.1 + (income - 1500000) * 0.15;
    else if (income > 1000000) tax = (income - 1000000) * 0.1;
    return income - tax;
}
double incomeExcludeTax(double hour){
    double income;
    if (hour <= 100) income = 12000 * hour;
    else {
        double extraHour = hour - 100;
        if (extraHour <= 50) income = 12000 * 100 + 16000 * extraHour;
        else if (extraHour <= 100) income = 12000 * 100 + 16000 * 50 + 20000 * (extraHour - 50);
        else income = 12000 * 100 + 16000 * 50 + 20000 * 50 + 25000 * (extraHour - 100);
    }
    return income;
}
double calculateLoan(double loan){
    const double interestRate = 0.02;
        loan = round(loan * (1 + interestRate));
    return loan;
}
int main()
{
    double hour, income, tax = 0;
    double loan = 10000000;
    const double allowance = 1500000, livingCost = 2000000;
    cout << "So gio lam viec la: ";
    cin >> hour;
    income = incomeIncludeTax(incomeExcludeTax(hour),tax);
    cout << fixed << setprecision(0) << "Thu nhap sau thue la: " << income << endl;
    const double pay = income + allowance - livingCost;
    int i = 1;
    while (loan > 0){
        cout << "Thang thu " << i << endl;
        cout << "So tien lai ngan hang la: " << calculateLoan(loan) - loan << endl;
        loan = calculateLoan(loan) - pay;
        if (loan > 0) cout << "So tien du no cua sinh vien la: " << loan << endl;
        else cout << "Sau " << i << " thang sinh vien hoan tra het no";
        i++;
    }
    return 0;
}
