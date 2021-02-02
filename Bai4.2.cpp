#include <iostream>
using namespace std;
int ucln(int x, int y){
    int u;
    while (y){
        u = x % y;
        x = y;
        y = u;
    }
    return x;
}
int main()
{
    int x,y;
    cin >> x >> y;
    cout << (x * y) / ucln(x,y);
    return 0;
}
