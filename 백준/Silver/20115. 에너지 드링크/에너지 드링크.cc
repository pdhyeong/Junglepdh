#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<double> vec;
    for(int i = 0;i<n;i++){
        double k;
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(),vec.end());
    double sum = vec[n-1];
    for(int i = 0;i<n-1;i++){
        sum += (vec[i]/2);
    }
    cout << sum;
    return 0;
}