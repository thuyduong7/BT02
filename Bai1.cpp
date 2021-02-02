#include <iostream>
#include <cmath>
using namespace std;
bool checkPrime(int x){
    if (x < 2) return 0;
    else for (int i = 2; i < sqrt(x); i++){
        if (x % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (checkPrime) cout << "yes";
    else cout << "no";
    return 0;
}
