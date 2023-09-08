#include <string>
#include <vector>
#include <iostream>
using namespace std;

long long solution(int n) {
    long long answer = 0;
    
    int dp[2001] = {0,};
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2] % 1234567;
    }
    return dp[n] % 1234567;
}