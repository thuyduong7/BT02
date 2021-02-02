#include <iostream>
#include <cmath>
using namespace std;
bool chinhphuong(int n){
    int m = sqrt(n);
    if (m * m == n) return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    if (chinhphuong(n)) cout << "YES";
    else cout << "NO";
    return 0;
}
