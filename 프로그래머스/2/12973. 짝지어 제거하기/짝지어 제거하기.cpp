#include <iostream>
#include<string>
#include <vector>
using namespace std;

int solution(string s)
{
    int answer = -1;
    vector<char> st;
    for(int i = 0;i<s.size();i++){
        st.push_back(s[i]);
        while(st.size() != 0 && st[st.size()-1] == st[st.size()-2]){
            st.pop_back();
            st.pop_back();
        }
    }
    return st.size() == 0 ? 1 : 0;
}