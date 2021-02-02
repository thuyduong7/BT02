#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Tong so mon hoc can tinh DTB: ";
    cin >> n;
    double diem[n], sum = 0;
    int heso[n], hesos = 0;
    for (int i = 1; i <= n; i++){
        cout << "Diem mon hoc " << i << ": ";
        cin >> diem[i];
        if (diem[i] < 0 || diem[i] > 10){
            cout << "Nhap lai diem mon hoc " << i << " (trong khoang tu 0..10): ";
            cin >> diem[i];
        }
        cout << "He so mon hoc " << i << ": ";
        cin >> heso[i];
        hesos += heso[i];
        sum += diem[i]*heso[i];
    }
    cout << "So mon hoc: " << n << endl;
    cout << "Tong so he so: " << hesos << endl;
    cout << "Diem trung binh cua " << n << " mon hoc: " << sum/hesos;
    return 0;
}
