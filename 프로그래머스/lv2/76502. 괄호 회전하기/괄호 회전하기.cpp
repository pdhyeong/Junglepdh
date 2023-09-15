#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = 0;
    for (int i = 0; i < s.size(); ++i) {
        stack<char> st;
        bool flag = false;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
                flag = true;
                st.push(s[i]);
            }
            else {
                if (s[i] == ']' && st.top() == '[')
                    st.pop();
                if (s[i] == '}' && st.top() == '{')
                    st.pop();
                if (s[i] == ')' && st.top() == '(')
                    st.pop();
            }
        }
        if (st.empty() && flag) answer++;

        char ch = s[0];
        s.erase(s.begin());
        s.push_back(ch);
    }
    return answer;
}