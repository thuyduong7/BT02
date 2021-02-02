#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double f,c,k;
    cin >> f;
    c = (f - 32) * 5 / 9;
    k = c + 273.15;
    cout << "Fahrenheit   	Celsius  	Absolute Value" << endl;
    cout << "    " << f << "           " << fixed << setprecision(2) << c << "              " << k;
    return 0;
}
