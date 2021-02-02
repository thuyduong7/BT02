#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int y = 0; y >= -n+1; y--){
        for (int x = -n+1; x < n; x++){
            if (x - y < n && x + y > -n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
