#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> st;
    while(1){
        string s;
        getline(cin,s);
        if(s == "END"){
            break;
        }
        st.push_back(s);
    }
    for(int i = 0;i<st.size();i++){
        reverse(st[i].begin(),st[i].end());
    }
    for(int i = 0;i<st.size();i++){
        cout << st[i] << '\n';
    }
    return 0;
}