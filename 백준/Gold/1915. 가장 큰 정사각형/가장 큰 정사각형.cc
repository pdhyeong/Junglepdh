#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int dp[1001][1001];
int main()
{
    int rows;
    int cols;
    cin >> rows >> cols;
    vector<string> matrix;
    for (int i = 0; i < rows; i++) {
        string s;
        cin >> s;
        matrix.push_back(s);
    }
    int max_size = 0;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (matrix[i - 1][j - 1] == '1') {
                dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
                max_size = max(max_size, dp[i][j]);
            }
        }
    }
    cout << max_size * max_size;
    return 0;
}