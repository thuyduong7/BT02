#include <iostream>
using namespace std;
int main()
{
    int n,m,max,min;
    cin >> n;
    int i = n;
    while(i){
        cin >> m;
        if (i == n){
            max = m;
            min = m;
        }
        if (m > max) max = m;
        if (m < min) min = m;
        i--;
    }
    cout << max << ' ' << min;
    return 0;
}
