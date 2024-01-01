#include<iostream>
#include<string>
#include <vector>
using namespace std;
long long dp[100001];
int main() {
    int n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 2;
    dp[4] = 3;
    dp[5] = 3;
    for(int i = 6;i<=100000;i++){
        dp[i] = (dp[i-2] + dp[i-4] + dp[i-6]) % 1000000009;
    }
    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        cout << dp[k] << '\n';
    }
    return 0;
}