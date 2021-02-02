#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double min, max, step;
    cin >> min >> max >> step;
    int c,k;
    cout << "Fahrenheit   	Celsius  	Absolute Value" << endl;
    for (int f = min; f <= max; f += step){
    c = (f - 32) * 5 / 9;
    k = c + 273.15;
    cout << setw(2) << ' ';
    cout << setw(16) << left << f;
    cout << setw(19) << left << fixed << setprecision(2) << c;
    cout << k << endl;
    }
    return 0;
}
