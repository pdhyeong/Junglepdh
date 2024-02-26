#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    int torelnce;
    string s;
    cin >> torelnce;
    cin >> s;

    int start = 0;
    int end = 1;
    int max_tor = 0;
    unordered_map<char,int> al;
    al[s[start]]++;
    for(int i = 1;i<s.size();i++){
        al[s[i]]++;
        end = i;
        while(al.size() > torelnce){
            al[s[start]]--;
            if(al[s[start]] == 0){
                al.erase(s[start]);
            }
            start++;
        }
        if(max_tor < end - start + 1){
            max_tor = end - start + 1;
        }
    }
    cout << max_tor;
    return 0;
}