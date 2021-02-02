#include <iostream>
using namespace std;
int main()
{
    int n;
    long int minr, minc;
    cin >> n;
    int *r = new int[n];
    int *c = new int[n];
    cin >> r[0] >> c[0];
    minr = r[0];
    minc = c[0];
    for (int i = 1; i < n; i++){
        cin >> r[i] >> c[i];
        if (r[i] < minr) minr = r[i];
        if (c[i] < minc) minc = c[i];
    }
    cout << minr * minc;
    return 0;
}
