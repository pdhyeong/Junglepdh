#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    string su = "";
    vector<string> st;
    for(int i = 0;i<s.size();i++){
        su += s[i];
        if(s[i] == ' '){
            st.push_back(su);
            su = "";
        }
    }
    st.push_back(su);
    for(int i = 0;i<st.size();i++){
        if(st[i][0] >= 'a' && st[i][0] <= 'z'){
            st[i][0] -= 32;
        }
        for(int j = 1;j<st[i].size();j++){
            if(st[i][j] >= 'A' && st[i][j] <= 'Z'){
                st[i][j] += 32;
            }
        }
        answer += st[i];
    }
    return answer;
}