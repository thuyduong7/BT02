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
    int tu,mau;
    cin >> tu >> mau;
    int u = ucln(tu,mau);
    tu /= u;
    mau /= u;
    if (tu > 0 && mau < 0){
        tu = -tu;
        mau = -mau;
    }
    cout << tu << '/' << mau;
    return 0;
}
