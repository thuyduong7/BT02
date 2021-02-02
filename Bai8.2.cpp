#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double delta = b*b - 4*a*c;
    if (delta == 0){
        cout << "Phuong trinh co nghiem kep x = " << -b/(2*a);
    }
    else if (delta > 0){
        cout << "Phuong trinh co 2 nghiem phan biet x1 = " << (-b+sqrt(delta))/(2*a) << ", x2 = " << (-b-sqrt(delta))/(2*a);
    }
    else{
        if (a > 0){
            if (sqrt(-delta)/(2*a) == 1) cout << "Phuong trinh co 2 nghiem phan biet x1 = " << -b/(2*a) << '+' << "i, x2 = " << -b/(2*a) << '-' << sqrt(-delta)/(2*a) << "i";
            else cout << "Phuong trinh co 2 nghiem phan biet x1 = " << -b/(2*a) << '+' << sqrt(-delta)/(2*a) << "i, x2 = " << -b/(2*a) << '-' << sqrt(-delta)/(2*a) << "i";
        }
        else{
            if (sqrt(-delta)/(2*a) == -1) cout << "Phuong trinh co 2 nghiem phan biet x1 = " << -b/(2*a) << '+' << "i, x2 = " << -b/(2*a) << '-' << "i";
            else cout << "Phuong trinh co 2 nghiem phan biet x1 = " << -b/(2*a) << '+' << -sqrt(-delta)/(2*a) << "i, x2 = " << -b/(2*a) << sqrt(-delta)/(2*a) << "i";
        }
    }
    return 0;
}
