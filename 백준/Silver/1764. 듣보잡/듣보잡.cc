#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    unordered_map<string,int> fir;
    unordered_map<string,int> sec;
    for(int i = 0;i<n;i++){
        string s;
        cin >> s;
        fir[s]++;
    }
    for(int i = 0;i<m;i++){
        string s;
        cin >> s;
        sec[s]++;
    }
    vector<string> str;
    for(const auto &pair : sec){
        if(fir.find(pair.first) != sec.end()){
            str.push_back(pair.first);
        }
    }
    sort(str.begin(),str.end());
    cout << str.size() << '\n';
    for(int i = 0;i<str.size();i++){
        cout << str[i] << '\n';
    }
    return 0;
}