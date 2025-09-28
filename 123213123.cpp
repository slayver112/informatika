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
    cout << r << s;
    float c = max(r, s);
    cout << c;
    cin.get();
    return 0;
}