#include <iostream>
using namespace std;
int main()
{
    int n, m;
    do {
        cin >> n;
        if (n != m){
            cout << n << ' ';
            m = n;
        }
    } while (n > 0);
    return 0;
}
