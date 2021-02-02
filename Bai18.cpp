#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double diem[n],sum = 0;
    for (int i = 1; i <= n; i++){
        cout << "Diem mon hoc " << i << ": ";
        cin >> diem[i];
        if (diem[i] < 0 || diem[i] > 10){
            cout << "Nhap lai diem mon hoc " << i << " (trong khoang tu 0..10): ";
            cin >> diem[i];
        }
        sum += diem[i];
    }
    cout << "So mon hoc: " << n << endl;
    cout << "Diem trung binh cua " << n << " mon hoc: " << sum/n;
}
