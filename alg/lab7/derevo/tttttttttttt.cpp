#include <iostream>

using namespace std;

long long factorial(int x) {
    long long result = 1;
    for (int i = 2; i <= x; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    long long answer = factorial(2*n)/(factorial(n+1)*factorial(n));
    cout << answer << endl;
    return 0;
}