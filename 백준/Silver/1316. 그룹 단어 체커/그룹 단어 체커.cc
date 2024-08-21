#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <set>
using namespace std;

bool check(string s){
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i = 1;i<s.size();i++){
        if(s[i] == s[i-1]){
            continue;
        }
        if(arr[s[i-1]-'a'] != 0){
            return false;
        }
        arr[s[i-1] - 'a']++;
    }
    if(arr[s[s.size()-1]-'a'] != 0){
        return false;
    }
    return true;
}

int main(){
    vector<string> str_list;
    int n;
    cin >> n;
    int answer = 0;
    for(int i =0;i<n;i++){
        string s;
        cin >> s;
        str_list.push_back(s);
    }

    for(int i = 0;i<str_list.size();i++){
        if(check(str_list[i])){
            answer++;
        }
    }
    cout << answer;
    return 0;
}