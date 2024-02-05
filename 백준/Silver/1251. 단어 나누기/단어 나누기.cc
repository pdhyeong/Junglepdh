#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> vec;

    for(int i = 0;i<s.size()-2;i++){
        for(int j = i+1;j<s.size()-1;j++){
            string val = "";
            for(int k = i;k>=0;k--){
                val += s[k];
            }
            for(int k = j;k>i;k--){
                val += s[k];
            }
            for(int k = s.size()-1;k>j;k--){
                val += s[k];
            }
            vec.push_back(val);
        }
    }
    sort(vec.begin(),vec.end());
    cout << vec[0] << '\n';
    return 0;
}