#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    vector<int> vec;
    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        vec.push_back(k);
    }
    for(int i = 0;i<m;i++){
        int k;
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(),vec.end());
    for(int i = 0;i<vec.size();i++){
        cout << vec[i] << ' ';
    }
    return 0;
}