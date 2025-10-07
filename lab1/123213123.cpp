#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x, y;
    cin >> x >> y;
    float r = sqrt(pow(x, 2) + pow(y, 2)) / pow(2, log2(x));
    float s = log(x) * tan(y);
    cout << "R = " << r << ", S = " << s << endl;
    float c = max(r, s);
    cout << "C = " << c << endl;
    cin.get();
    return 0;
}