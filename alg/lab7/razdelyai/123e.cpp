#include <iostream>
#include <vector>
using namespace std;

long long mergeSort(vector<int>& a, int l, int r) {
    if (l >= r) return 0;
    int m = (l + r) / 2;
    long long inv = 0;
    inv += mergeSort(a, l, m);
    inv += mergeSort(a, m + 1, r);
    vector<int> temp(r - l + 1);
    int i = l, j = m + 1, k = 0;
    while (i <= m && j <= r) {
        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        }
        else {
            temp[k++] = a[j++];
            inv += (m - i + 1);
        }
    }
    while (i <= m) temp[k++] = a[i++];
    while (j <= r) temp[k++] = a[j++];
    for (int p = 0; p < k; p++) a[l + p] = temp[p];
    return inv;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << mergeSort(a, 0, n - 1) << endl;
    return 0;
}