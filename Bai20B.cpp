#include <iostream>
using namespace std;
int main()
{
    int income, tax = 0;
    cin >> income;
    income *= 0.91;
    if (income > 2000000) tax = 500000 * 0.25 + (income - 2000000) * 0.20;
    else if (income > 1500000) tax = 500000 * 0.1 + (income - 1500000) * 0.15;
    else if (income > 1000000) tax = (income - 1000000) * 0.1;
    cout << tax << ' ' << income - tax;
    return 0;
}
