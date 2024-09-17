#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int dp[303];
int main(){
    // 계단은 1단계, 2단계씩 올라야함.
    // 연속으로 3개이어지게 못밟음.(첫 계단 제외)
    // 마지막 계단은 무조건 밟아야함.

    vector<int> stair;
    int n;
    cin >> n;

    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        stair.push_back(k);
    }
    dp[0] = stair[0];
    dp[1] = stair[0] + stair[1];
    dp[2] = max(stair[0] + stair[2] , stair[1] + stair[2]);
    int count = 0;
    for(int i = 3;i<n;i++){
        dp[i] = max(dp[i-3]+stair[i-1] + stair[i],dp[i-2] + stair[i]);
    }
    cout << dp[n-1];
    return 0;
}