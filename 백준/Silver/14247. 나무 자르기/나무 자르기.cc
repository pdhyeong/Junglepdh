#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool comp(pair<long long,long long> a,pair<long long ,long long> b){
    return a.second < b.second;
}
int main(){
    int n;
    cin >> n;
    vector<pair<long long ,long long> > tree(n);
    for(int i = 0;i<n;i++){
        long long k;
        cin >> k;
        tree[i].first = k;
    }
    for(int i = 0;i<n;i++){
        long long k;
        cin >> k;
        tree[i].second = k;
    }
    sort(tree.begin(),tree.end(),comp);
    long long sum = 0;
    for(int i = 0;i<tree.size();i++){
        sum += tree[i].first + (tree[i].second * i);
    }
    cout << sum << '\n';
    return 0;
}