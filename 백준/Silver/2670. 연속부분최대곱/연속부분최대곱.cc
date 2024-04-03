#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
#define MAX(a,b) (((a) > (b) ? (a) : (b)))
int main() {
    int n;
    cin >> n;

    vector<double> vec;
    double dp[10001];
    for(int i = 0;i<n;i++){
        double f;
        cin >> f;
        vec.push_back(f);
    }

    // double max_value = 0;
    // for(int i = 0;i<vec.size();i++){
    //     double comp_value = 1;
    //     for(int j = i;j<vec.size();j++){
    //         comp_value *= vec[j];
    //         max_value = MAX(comp_value,max_value);
    //     }
    // }
    // printf("%.3lf",max_value);
    dp[0] = vec[0];
    double max_value = -1000;
    for(int i = 1;i<vec.size();i++){
        dp[i] = MAX(vec[i],dp[i-1] * vec[i]);
        max_value = MAX(max_value,dp[i]);
    }
    printf("%.3lf",max_value);
    return 0;
}