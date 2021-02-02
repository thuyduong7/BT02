#include <iostream>
using namespace std;
int main()
{
    int n, dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - dem; j++){
            cout << j + dem << ' ';
        }
        for (int j = n - dem + 1; j <= n; j++){
            cout << j - n + dem << ' ';
        }
        dem++;
        cout << endl;
    }
}
