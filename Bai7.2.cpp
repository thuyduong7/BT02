#include <iostream>
using namespace std;
int main()
{
    double a1,b1,c1,a2,b2,c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    double d = a1*b2 - a2*b1, dx = c1*b2 - c2*b1, dy = a1*c2 - a2*c1;
    if (d){
        cout << "He co nghiem duy nhat x = " << dx/d << ", y = " << dy/d;
    } else{
        if (dx == 0 && dy == 0) cout << "He co vo so nghiem";
        else cout << "He vo nghiem";
    }
    return 0;
}
