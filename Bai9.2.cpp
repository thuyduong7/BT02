#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, chuso, sum = 0;
    cin >> a;
    while (a){
        chuso = a % 10;
        a /= 10;
        sum += chuso;
    }
    cout << sum;
    return 0;
}
