#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
long long dp[100001][2];
int check[100001];
int max_value(int a,int b) {if(a > b) return a; return b;}
int main() {
    int n;
    cin >> n;
    int maxi = 0;
    vector<int> vec;
    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        maxi = max_value(maxi,k);
        vec.push_back(k);
    }
    dp[1][0] = 1;
    dp[1][1] = 0;
    dp[2][0] = 1;
    dp[2][1] = 1;
    dp[3][0] = 2;
    dp[3][1] = 2;
    dp[4][0] = 3;
    dp[4][1] = 4;
    dp[5][0] = 7;
    dp[5][1] = 6;
    for(int i = 6;i<=maxi;i++){
        dp[i][0] = (dp[i-1][1] + dp[i-2][1] + dp[i-3][1]) % 1000000009;
        dp[i][1] = (dp[i-1][0] + dp[i-2][0] + dp[i-3][0]) % 1000000009;
    }
    for(int i = 0;i<vec.size();i++){
        cout << dp[vec[i]][0] << ' ' << dp[vec[i]][1] << '\n';
    }
    return 0;
}