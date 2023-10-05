#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    stack<int> st;
    int index = 0;
    for(int i = 1;i<=order.size();i++){
        st.push(i);
        while(!st.empty() && st.top() == order[index]){
            st.pop();
            index++;
        }
    }
    return index;
}