#include <iostream>
using namespace std;
int main()
{
    int hour;
    long int salary;
    cin >> hour;
    if (hour <= 100) salary = 12000 * hour;
    else {
        int extraHour = hour - 100;
        if (extraHour <= 50) salary = 12000 * 100 + 16000 * extraHour;
        else if (extraHour <= 100) salary = 12000 * 100 + 16000 * 50 + 20000 * (extraHour - 50);
        else salary = 12000 * 100 + 16000 * 50 + 20000 * 50 + 25000 * (extraHour - 100);
    }
    cout << salary;
    return 0;
}
