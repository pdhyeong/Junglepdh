#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
    
    int n ,m;
    cin >> n >> m;
    vector<int> vec;
    int sum = 0;
    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        vec.push_back(k);
    }
    vec.push_back(0);
    sort(vec.begin(),vec.end());
    for(int i = 0;i<=n;i++){
        sum += vec[i];
        vec[i] = sum;
    }
    for(int i = 0;i<m;i++){
        int a,b;
        cin >> a >>b;
        cout << vec[b] - vec[a-1] << '\n';
    }
    return 0;
}