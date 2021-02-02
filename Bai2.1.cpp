#include <iostream>
using namespace std;
int main()
{
    double x,result = 1;
    int y;
    cin >> x >> y;
    for (int i = 0; i < y; i++){
        result *= x;
    }
    cout << result;
    return 0;
}
