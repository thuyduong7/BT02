#include <iostream>
using namespace std;
void checkTriangle(int a, int b, int c){
    if (a*a + b*b == c*c || b*b + c*c == a*a || b*b + c*c == a*a){
        if (a == b || a == c || b == c) cout << "Day la tam giac vuong can";
        else cout << "Day la tam giac vuong";
    }
    else if (a == b && a == c){
        cout << "Day la tam giac deu";
    }
    else if (a == b || a == c || b == c) cout << "Day la tam giac can";
    else cout << "Day la tam giac thuong";
}
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if ((a + b) > c && (a + c) > b && (b + c) > a){
        checkTriangle(a,b,c);
    }
    else cout << "Day khong phai tam giac";
    return 0;
