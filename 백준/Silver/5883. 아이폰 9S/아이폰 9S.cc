#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
int max_value(int x,int y){
    if(x > y){
        return x;
    }
    return y;
}
int main() {
    int n;
    cin >> n;
    vector<int> vec;
    int answer = 0;
    for(int i = 0;i<n;i++){
        int k;
        cin >> k;
        vec.push_back(k);
    }

    for(int i = 0;i<vec.size();i++){
        vector<int> comp_vec;
        for(int j = 0;j<vec.size();j++){
            if(vec[i] == vec[j]){
                continue;
            }
            comp_vec.push_back(vec[j]);
        }
        int maxi = 0;
        int value_comp = 1;
        for(int j = 1;j<comp_vec.size();j++){
            if(comp_vec[j-1] == comp_vec[j]){
                ++value_comp;
            }
            else{
                value_comp = 1;
            }
            maxi = max_value(value_comp,maxi);
        }
        answer = max(maxi,answer);
    }
    cout << answer;
    return 0;
}