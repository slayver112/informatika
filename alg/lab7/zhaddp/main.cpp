#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMaxFieldPoints(int n, int m, const vector<vector<int>>& points) {
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + points[i - 1][j - 1];
        }
    }

    return dp[n][m];
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> points(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < m; j++) {
            points[i][j] = line[j] - '0';
        }
    }
    reverse(points.begin(), points.end());
    int result = getMaxFieldPoints(n, m, points);
    cout << result << endl;
    return 0;
}