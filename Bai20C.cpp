#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    double loan;
    cin >> loan;
    const double interestRate = 0.02;
    for (int i = 0; i < 12; i++){
        loan = round(loan * (1 + interestRate));
    }
    cout << fixed << setprecision(0) << loan;
    return 0;
}
