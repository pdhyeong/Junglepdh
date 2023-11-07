#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int solution(vector<vector<int>> matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> dp(rows + 1, vector<int>(cols + 1, 0));
    int max_size = 0;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (matrix[i - 1][j - 1] == 1) {
                dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
                max_size = max(max_size, dp[i][j]);
            }
        }
    }
    return max_size * max_size;
}