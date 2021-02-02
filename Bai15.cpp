#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 0) cout << "0 ";
    for (int i = 1; i <= n; i++){
        int f0 = 0, f1 = 1;
        int f = f0 + f1;
        while (f < i){
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        if (f == i) cout << i << ' ';
    }
    return 0;
}
