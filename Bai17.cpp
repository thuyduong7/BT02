#include <iostream>
using namespace std;
int main()
{
    const int n = 5;
    double a[n], sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << sum/n;
    return 0;
}
