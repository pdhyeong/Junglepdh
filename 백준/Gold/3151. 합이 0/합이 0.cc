#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> list;
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        list.push_back(k);
    }
    sort(list.begin(),list.end());

    long long answer = 0;
    for(int i = 0;i<list.size()-1;i++){
        for(int j = i+1;j<list.size();j++){
            long long comp = list[i] + list[j];
            int idx1 = lower_bound(list.begin()+j+1,list.end(),-comp)-list.begin();
            int idx2 = upper_bound(list.begin()+j+1,list.end(),-comp)-list.begin();
            answer += idx2 - idx1;
        }
    }
    cout << answer << '\n';
    return 0;
}