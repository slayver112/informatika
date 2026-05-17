#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int> path, int n, int start) {
    if (n == 0) {
        for (int num : path) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }
    for (int i = start; i <= n; ++i) {
        vector<int> newPath = path;
        newPath.push_back(i);

        backtrack(newPath, n - i, i);
    }
}

int main() {
    int n;
    cin >> n;
    backtrack({}, n, 1);
    return 0;
}