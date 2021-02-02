#include <iostream>
#include <cmath>
using namespace std;
bool chinhphuong(int n){
    int m = sqrt(n);
    if (m * m == n) return true;
    return false;
}
bool hoanhao(int n){
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) sum += (i + n/i);

    }
    if (n == sum) return true;
    return false;
}
bool nguyento(int n){
    if (n < 2) return false;
    else for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    cout << "Cac so chinh phuong la: ";
    for (int i = 2; i <= n; i++){
        if (chinhphuong(i)) cout << i << ' ';
    }
    cout << endl << "Cac so hoan hao la: ";
    for (int i = 2; i <= n; i++){
        if (hoanhao(i)) cout << i << ' ';
    }
    cout << endl << "Cac so nguyen to la: ";
    for (int i = 2; i <= n; i++){
        if (nguyento(i)) cout << i << ' ';
    }
    return 0;
}
