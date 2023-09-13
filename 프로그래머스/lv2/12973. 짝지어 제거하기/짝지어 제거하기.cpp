#include <iostream>
#include<string>
#include <vector>
using namespace std;

int solution(string s)
{
    int answer = 0;
    vector<char> st;
    for(int i = 0;i<s.size();i++){
        st.push_back(s[i]);
        while(st.size() > 1 && st[st.size()-1] == st[st.size()-2]){
            st.pop_back();
            st.pop_back();
        }
    }
    if(st.size() == 0){
        answer = 1;
    }
    return answer;
}