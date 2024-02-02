#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> suffix_list;
    for(int i = 0;i<s.size();i++){
        string suff = "";
        for(int j = i;j<s.size();j++){
            suff += s[j];
        }
        suffix_list.push_back(suff);
    }
    sort(suffix_list.begin(),suffix_list.end());
    for(int i = 0;i<suffix_list.size();i++){
        cout << suffix_list[i] << '\n';
    }
    return 0;
}